add_test( Abc.aaa /home/reynald/test/googletest/googlemock/my_project/build/hello_test [==[--gtest_filter=Abc.aaa]==] --gtest_also_run_disabled_tests)
set_tests_properties( Abc.aaa PROPERTIES WORKING_DIRECTORY /home/reynald/test/googletest/googlemock/my_project/build)
set( hello_test_TESTS Abc.aaa)
