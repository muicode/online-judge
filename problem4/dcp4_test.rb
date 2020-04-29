require "test/unit"
require_relative './dcp4'

class DCP4Test < Test::Unit::TestCase
  def test_case1
    arr = [3, 4, -1, 1]
    assert_equal 2, dcp4_naive(arr)
    assert_equal 2, dcp4_hash(arr)
    assert_equal 2, dcp4_optimized(arr)
  end

  def test_case2
    arr = [1, 2, 0]
    assert_equal 3, dcp4_naive(arr)
    assert_equal 3, dcp4_hash(arr)
    assert_equal 3, dcp4_optimized(arr)
  end

  def test_case3
    arr = [-2, -9, -10]
    assert_equal 1, dcp4_naive(arr)
    assert_equal 1, dcp4_hash(arr)
    assert_equal 1, dcp4_optimized(arr)
  end

  def test_case4
    arr = [1, 2, 3]
    assert_equal 4, dcp4_naive(arr)
    assert_equal 4, dcp4_hash(arr)
    assert_equal 4, dcp4_optimized(arr)
  end
  
  def test_case5
    arr = [1, 1, 2, 3, 5, 90]
    assert_equal 4, dcp4_naive(arr)
    assert_equal 4, dcp4_hash(arr)
    assert_equal 4, dcp4_optimized(arr)
  end

  def test_case6
    arr = [100, 101, 102, 10, -5, -10]
    assert_equal 1, dcp4_naive(arr)
    assert_equal 1, dcp4_hash(arr)
    assert_equal 1, dcp4_optimized(arr)
  end

  def test_case7
    arr = [5, -6]
    assert_equal 1, dcp4_naive(arr)
    assert_equal 1, dcp4_hash(arr)
    assert_equal 1, dcp4_optimized(arr)
  end

  def test_case8
    arr = [2, 4, 0, 1]
    assert_equal 3, dcp4_naive(arr)
    assert_equal 3, dcp4_hash(arr)
    assert_equal 3, dcp4_optimized(arr)
  end
end
