/**
 * @file	Slice.cpp
 *
 * @brief	Implementacja klasy plastra.
 */

#include "Slice.h"

Slice::Slice( Picture* picture, SliceMode type ) :
itsParentPicture( picture ),
itsSliceType( type ),
itsQPDelta( 0 ),
itsQPOffsetForCb( 0 ),
itsQPOffsetForCr( 0 ),
itsSAOChromaEnabled( true ),
itsSAOLumaEnabled( true ),
itsLoopFilterEnabled( true ),
itsDeblockingFilterEnabled( true ),
itsBetaOffset( 0 ),
itsTcOffset( 0 )
{
	assert( picture != nullptr );
}

Slice::~Slice( )
{
}

Void Slice::appendCTU( std::shared_ptr<CTU> ctu )
{
	//TODO
}