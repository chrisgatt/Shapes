
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <iostream>
#include <memory>
#include <cassert>
// Boost
#include <boost/filesystem.hpp>
// Boost Unit Test Framework (UTF)
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE testShapes
#include <boost/test/unit_test.hpp>
// Objects
#include<Rectangle.hpp>
#include<Square.hpp>
#include<Circle.hpp>

namespace boost_utf = boost::unit_test;

// (Boost) Unit Test XML Report
std::ofstream utfReportStream ("Test_utfresults.xml");

/**
 * Configuration for the Boost Unit Test Framework (UTF)
 */
struct UnitTestConfig {
  /** Constructor. */
  UnitTestConfig() {
    boost_utf::unit_test_log.set_stream (utfReportStream);
    boost_utf::unit_test_log.set_format (boost_utf::OF_XML);
    boost_utf::unit_test_log.set_threshold_level (boost_utf::log_test_units);
  }

  /** Destructor. */
  ~UnitTestConfig() {
  }
};

// /////////////// Main: Unit Test Suite //////////////

// Set the UTF configuration (re-direct the output to a specific file)
BOOST_GLOBAL_FIXTURE (UnitTestConfig);

// Start the test suite
BOOST_AUTO_TEST_SUITE (master_test_suite)

/**
 * Test various ways to build Character objects
 */
BOOST_AUTO_TEST_CASE (shapes1) {

    Rectangle *rect = new Rectangle (10, 5);
    assert (rect != nullptr);
    std::cout << "rectangle size: 10x5 cm, area: " << rect->area() << " cm2." << std::endl;
    BOOST_CHECK_MESSAGE (rect->area() == 50.0d,
                       "The area should be 50");

    Square *sq = new Square (5);
    assert (sq != nullptr);
    std::cout << "square size: 10x5 cm, area: " << sq->area() << " cm2." << std::endl;
    BOOST_CHECK_MESSAGE (sq->area() == 25.0d,
                       "The area should be 25");


    Circle *circ = new Circle (5);
    assert (circ != nullptr);
    std::cout << "square size: 10x5 cm, area: " << circ->area() << " cm2." << std::endl;
    BOOST_CHECK_MESSAGE ( (circ->area() - 78) < 1,
                       "The area should be 78.5398");

    // Cleaning
    delete rect; rect = nullptr;
    delete sq; sq = nullptr;
    delete circ; circ = nullptr;
}

// End the test suite
BOOST_AUTO_TEST_SUITE_END()
