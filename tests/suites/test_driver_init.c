#include "tests.h"

static pca9606_s mock_driver;
static struct theft_run_config run_config;

static void setup_cb(void *data) {
    (void)data;

    set_up_mock_driver(&mock_driver);
    set_up_theft_run_config(&run_config);
}

TEST expect_pass(void) {
    PASS();
}

SUITE(test_driver_init) {
    SET_SETUP(setup_cb, NULL);

    RUN_TEST(expect_pass);
}
