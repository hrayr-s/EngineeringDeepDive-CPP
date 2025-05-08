//
// Created by Hrayr Stepanyan on 3/17/25.
//

#ifndef DOUBLE_TEMPL_H
#define DOUBLE_TEMPL_H


template <
    template<typename T, typename Alloc = std::allocator<int> > class CONT>
void test_container()
{
    CONT< int > int_container;
    int_container.insert(int_container.end(), 0);
    std::cout << "int_container.size() = " << int_container.size() << std::endl;
}


struct CircularObject {};
struct RectangularObject {};
struct LinearObject {};
struct ConeObject {};


// Next, there are several creational strategies:

template< typename ObjectType >
struct SequentialBuilder {};

template< typename ObjectType >
struct ParallelBuilder {};

template< typename ObjectType >
struct PostponedBuilder {};


// Next, we want to compare pairs of strategies.
//
// Note, we want to COMPARE THE BUILDERS themselves, and not their various
// instantiations.


template<
        template< typename T > class Builder1,
        template< typename T > class Builder2 >
struct BuildersComparator
{
    /// Compares provided 2 Builders on circular objects.
    void compareOnCircles() const {
        Builder1< CircularObject > b1;
        Builder2< CircularObject > b2;
        //
        // compare 'b1' and 'b2' ...
    }

    /// Compares provided 2 Builders on rectangular objects.
    void compareOnRectangles() const {
        Builder1< RectangularObject > b1;
        Builder2< RectangularObject > b2;
        //
        // compare 'b1' and 'b2' ...
    }

    /// Compares provided 2 Builders on cone objects.
    void compareOnCones() const {
        Builder1< ConeObject > b1;
        Builder2< ConeObject > b2;
        //
        // compare 'b1' and 'b2' ...
    }

    /// Performs overall comparison of the 2 provided Builders.
    void compare() const {
        // if ( ... )  //  <-- compare depending on some condition
            compareOnCircles();
        // if ( ... )
            compareOnRectangles();
        // if ( ... )
            compareOnCones();
    }
};

#endif //DOUBLE_TEMPL_H
