
#include <gtest/gtest.h>
#include <vector>
#include "./discharge_double_sort_tbb.h"

TEST(Parallel_Operations_OpenMP, Test_90) {
    int count = 50;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    // tbb::tick_count start_seq = tbb::tick_count::now();
    discharge_sort_seq(vb);
    // tbb::tick_count end_seq = tbb::tick_count::now();
    // tbb::tick_count start_par = tbb::tick_count::now();
    discharge_sort(sd, tr);
    // tbb::tick_count end_par = tbb::tick_count::now();
    // double sequential_runtime = (end_seq - start_seq).seconds();
    // double parallel_tbb_runtime = (end_par - start_par).seconds();
    // std::cout << "sequential_runtime = " << sequential_runtime << std::endl;
    // std::cout << "parallel_tbb_runtime = " << parallel_tbb_runtime
    // << std::endl;
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

TEST(Parallel_Operations_OpenMP, Test_100) {
    int count = 60;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    // tbb::tick_count start_seq = tbb::tick_count::now();
    discharge_sort_seq(vb);
    // tbb::tick_count end_seq = tbb::tick_count::now();
    // tbb::tick_count start_par = tbb::tick_count::now();
    discharge_sort(sd, tr);
    // tbb::tick_count end_par = tbb::tick_count::now();
    // double sequential_runtime = (end_seq - start_seq).seconds();
    // double parallel_tbb_runtime = (end_par - start_par).seconds();
    // std::cout << "sequential_runtime = " << sequential_runtime << std::endl;
    // std::cout << "parallel_tbb_runtime = " << parallel_tbb_runtime
    // << std::endl;
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

TEST(Parallel_Operations_OpenMP, Test_120) {
    int count = 70;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    // tbb::tick_count start_seq = tbb::tick_count::now();
    discharge_sort_seq(vb);
    // tbb::tick_count end_seq = tbb::tick_count::now();
    // tbb::tick_count start_par = tbb::tick_count::now();
    discharge_sort(sd, tr);
    // tbb::tick_count end_par = tbb::tick_count::now();
    // double sequential_runtime = (end_seq - start_seq).seconds();
    // double parallel_tbb_runtime = (end_par - start_par).seconds();
    // std::cout << "sequential_runtime = " << sequential_runtime << std::endl;
    // std::cout << "parallel_tbb_runtime = " << parallel_tbb_runtime
    // << std::endl;
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}
TEST(Parallel_Operations_OpenMP, Test_140) {
    int count = 80;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}
TEST(Parallel_Operations_OpenMP, Test_160) {
    int count = 90;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
