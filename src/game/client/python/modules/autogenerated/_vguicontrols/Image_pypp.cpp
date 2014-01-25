// This file has been generated by Py++.

#include "cbase.h"
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "cbase.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/AnimationController.h"
#include "vgui_controls/EditablePanel.h"
#include "vgui_controls/AnalogBar.h"
#include "vgui_controls/Image.h"
#include "vgui_controls/TextImage.h"
#include "vgui_controls/ScrollBar.h"
#include "vgui_controls/ScrollBarSlider.h"
#include "vgui_controls/Menu.h"
#include "vgui_controls/MenuButton.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/TextEntry.h"
#include "vgui_controls/RichText.h"
#include "vgui_controls/Tooltip.h"
#include "vgui/IBorder.h"
#include "vgui_bitmapimage.h"
#include "vgui_avatarimage.h"
#include "srcpy_vgui.h"
#include "hl2wars_baseminimap.h"
#include "vgui_video_general.h"
#include "vgui/wars_model_panel.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "Image_pypp.hpp"

namespace bp = boost::python;

struct Image_wrapper : vgui::Image, bp::wrapper< vgui::Image > {

    void DrawFilledRect( int x0, int y0, int x1, int y1 ){
        vgui::Image::DrawFilledRect( x0, y0, x1, y1 );
    }

    void DrawLine( int x0, int y0, int x1, int y1 ){
        vgui::Image::DrawLine( x0, y0, x1, y1 );
    }

    void DrawOutlinedRect( int x0, int y0, int x1, int y1 ){
        vgui::Image::DrawOutlinedRect( x0, y0, x1, y1 );
    }

    void DrawPolyLine( int * px, int * py, int numPoints ){
        vgui::Image::DrawPolyLine( px, py, numPoints );
    }

    void DrawPrintChar( wchar_t ch ){
        vgui::Image::DrawPrintChar( ch );
    }

    void DrawPrintChar( int x, int y, wchar_t ch ){
        vgui::Image::DrawPrintChar( x, y, ch );
    }

    void DrawPrintText( wchar_t const * str, int strlen ){
        vgui::Image::DrawPrintText( str, strlen );
    }

    void DrawPrintText( int x, int y, wchar_t const * str, int strlen ){
        vgui::Image::DrawPrintText( x, y, str, strlen );
    }

    void DrawSetColor( ::Color color ){
        vgui::Image::DrawSetColor( color );
    }

    void DrawSetColor( int r, int g, int b, int a ){
        vgui::Image::DrawSetColor( r, g, b, a );
    }

    void DrawSetTextColor( ::Color color ){
        vgui::Image::DrawSetTextColor( color );
    }

    void DrawSetTextColor( int r, int g, int b, int a ){
        vgui::Image::DrawSetTextColor( r, g, b, a );
    }

    void DrawSetTextFont( ::vgui::HFont font ){
        vgui::Image::DrawSetTextFont( font );
    }

    void DrawSetTextPos( int x, int y ){
        vgui::Image::DrawSetTextPos( x, y );
    }

    void DrawSetTexture( int id ){
        vgui::Image::DrawSetTexture( id );
    }

    void DrawTexturedRect( int x0, int y0, int x1, int y1 ){
        vgui::Image::DrawTexturedRect( x0, y0, x1, y1 );
    }

    virtual bool Evict(  ) {
        PY_OVERRIDE_CHECK( vgui::Image, Evict )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, Evict )
        bp::override func_Evict = this->get_override( "Evict" );
        if( func_Evict.ptr() != Py_None )
            try {
                return func_Evict(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->vgui::Image::Evict(  );
            }
        else
            return this->vgui::Image::Evict(  );
    }
    
    bool default_Evict(  ) {
        return vgui::Image::Evict( );
    }

    virtual void GetContentSize( int & wide, int & tall ) {
        namespace bpl = boost::python;
        bpl::override func_GetContentSize = this->get_override( "GetContentSize" );
        if( func_GetContentSize.ptr() != Py_None ) {
            bpl::object py_result = bpl::call<bpl::object>( func_GetContentSize.ptr() );
            wide = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "wide" ) );
            tall = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "tall" ) );
        }
        else{
            vgui::Image::GetContentSize( wide, tall );
        }
    }
    
    static boost::python::tuple default_GetContentSize( ::vgui::Image & inst ){
        int wide2;
        int tall2;
        if( dynamic_cast< Image_wrapper * >( boost::addressof( inst ) ) ){
            inst.::vgui::Image::GetContentSize(wide2, tall2);
        }
        else{
            inst.GetContentSize(wide2, tall2);
        }
        return bp::make_tuple( wide2, tall2 );
    }

    virtual ::vgui::HTexture GetID(  ) {
        PY_OVERRIDE_CHECK( vgui::Image, GetID )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, GetID )
        bp::override func_GetID = this->get_override( "GetID" );
        if( func_GetID.ptr() != Py_None )
            try {
                return func_GetID(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->vgui::Image::GetID(  );
            }
        else
            return this->vgui::Image::GetID(  );
    }
    
    ::vgui::HTexture default_GetID(  ) {
        return vgui::Image::GetID( );
    }

    virtual int GetNumFrames(  ) {
        PY_OVERRIDE_CHECK( vgui::Image, GetNumFrames )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, GetNumFrames )
        bp::override func_GetNumFrames = this->get_override( "GetNumFrames" );
        if( func_GetNumFrames.ptr() != Py_None )
            try {
                return func_GetNumFrames(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->vgui::Image::GetNumFrames(  );
            }
        else
            return this->vgui::Image::GetNumFrames(  );
    }
    
    int default_GetNumFrames(  ) {
        return vgui::Image::GetNumFrames( );
    }

    virtual void GetPos( int & x, int & y ) {
        namespace bpl = boost::python;
        bpl::override func_GetPos = this->get_override( "GetPos" );
        if( func_GetPos.ptr() != Py_None ) {
            bpl::object py_result = bpl::call<bpl::object>( func_GetPos.ptr() );
            x = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "x" ) );
            y = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "y" ) );
        }
        else{
            vgui::Image::GetPos( x, y );
        }
    }
    
    static boost::python::tuple default_GetPos( ::vgui::Image & inst ){
        int x2;
        int y2;
        if( dynamic_cast< Image_wrapper * >( boost::addressof( inst ) ) ){
            inst.::vgui::Image::GetPos(x2, y2);
        }
        else{
            inst.GetPos(x2, y2);
        }
        return bp::make_tuple( x2, y2 );
    }

    virtual void GetSize( int & wide, int & tall ) {
        namespace bpl = boost::python;
        bpl::override func_GetSize = this->get_override( "GetSize" );
        if( func_GetSize.ptr() != Py_None ) {
            bpl::object py_result = bpl::call<bpl::object>( func_GetSize.ptr() );
            wide = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "wide" ) );
            tall = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "tall" ) );
        }
        else{
            vgui::Image::GetSize( wide, tall );
        }
    }
    
    static boost::python::tuple default_GetSize( ::vgui::Image & inst ){
        int wide2;
        int tall2;
        if( dynamic_cast< Image_wrapper * >( boost::addressof( inst ) ) ){
            inst.::vgui::Image::GetSize(wide2, tall2);
        }
        else{
            inst.GetSize(wide2, tall2);
        }
        return bp::make_tuple( wide2, tall2 );
    }

    virtual int GetTall(  ) {
        PY_OVERRIDE_CHECK( vgui::Image, GetTall )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, GetTall )
        bp::override func_GetTall = this->get_override( "GetTall" );
        if( func_GetTall.ptr() != Py_None )
            try {
                return func_GetTall(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->vgui::Image::GetTall(  );
            }
        else
            return this->vgui::Image::GetTall(  );
    }
    
    int default_GetTall(  ) {
        return vgui::Image::GetTall( );
    }

    virtual int GetWide(  ) {
        PY_OVERRIDE_CHECK( vgui::Image, GetWide )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, GetWide )
        bp::override func_GetWide = this->get_override( "GetWide" );
        if( func_GetWide.ptr() != Py_None )
            try {
                return func_GetWide(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->vgui::Image::GetWide(  );
            }
        else
            return this->vgui::Image::GetWide(  );
    }
    
    int default_GetWide(  ) {
        return vgui::Image::GetWide( );
    }

    virtual void SetFrame( int nFrame ) {
        PY_OVERRIDE_CHECK( vgui::Image, SetFrame )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, SetFrame )
        bp::override func_SetFrame = this->get_override( "SetFrame" );
        if( func_SetFrame.ptr() != Py_None )
            try {
                func_SetFrame( nFrame );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->vgui::Image::SetFrame( nFrame );
            }
        else
            this->vgui::Image::SetFrame( nFrame );
    }
    
    void default_SetFrame( int nFrame ) {
        vgui::Image::SetFrame( nFrame );
    }

    virtual void SetRotation( int iRotation ) {
        PY_OVERRIDE_CHECK( vgui::Image, SetRotation )
        PY_OVERRIDE_LOG( _vguicontrols, vgui::Image, SetRotation )
        bp::override func_SetRotation = this->get_override( "SetRotation" );
        if( func_SetRotation.ptr() != Py_None )
            try {
                func_SetRotation( iRotation );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->vgui::Image::SetRotation( iRotation );
            }
        else
            this->vgui::Image::SetRotation( iRotation );
    }
    
    void default_SetRotation( int iRotation ) {
        vgui::Image::SetRotation( iRotation );
    }

    void SetSize( int wide, int tall ){
        vgui::Image::SetSize( wide, tall );
    }

    virtual void Paint() {}

};

void register_Image_class(){

    bp::class_< Image_wrapper, bp::bases< vgui::IImage >, boost::noncopyable >( "Image", bp::no_init )    
        .def( 
            "DrawFilledRect"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawFilledRect)
            , ( bp::arg("x0"), bp::arg("y0"), bp::arg("x1"), bp::arg("y1") ) )    
        .def( 
            "DrawLine"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawLine)
            , ( bp::arg("x0"), bp::arg("y0"), bp::arg("x1"), bp::arg("y1") ) )    
        .def( 
            "DrawOutlinedRect"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawOutlinedRect)
            , ( bp::arg("x0"), bp::arg("y0"), bp::arg("x1"), bp::arg("y1") ) )    
        .def( 
            "DrawPolyLine"
            , (void ( Image_wrapper::* )( int *,int *,int ) )(&Image_wrapper::DrawPolyLine)
            , ( bp::arg("px"), bp::arg("py"), bp::arg("numPoints") ) )    
        .def( 
            "DrawPrintChar"
            , (void ( Image_wrapper::* )( wchar_t ) )(&Image_wrapper::DrawPrintChar)
            , ( bp::arg("ch") ) )    
        .def( 
            "DrawPrintChar"
            , (void ( Image_wrapper::* )( int,int,wchar_t ) )(&Image_wrapper::DrawPrintChar)
            , ( bp::arg("x"), bp::arg("y"), bp::arg("ch") ) )    
        .def( 
            "DrawPrintText"
            , (void ( Image_wrapper::* )( wchar_t const *,int ) )(&Image_wrapper::DrawPrintText)
            , ( bp::arg("str"), bp::arg("strlen") ) )    
        .def( 
            "DrawPrintText"
            , (void ( Image_wrapper::* )( int,int,wchar_t const *,int ) )(&Image_wrapper::DrawPrintText)
            , ( bp::arg("x"), bp::arg("y"), bp::arg("str"), bp::arg("strlen") ) )    
        .def( 
            "DrawSetColor"
            , (void ( Image_wrapper::* )( ::Color ) )(&Image_wrapper::DrawSetColor)
            , ( bp::arg("color") ) )    
        .def( 
            "DrawSetColor"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawSetColor)
            , ( bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a") ) )    
        .def( 
            "DrawSetTextColor"
            , (void ( Image_wrapper::* )( ::Color ) )(&Image_wrapper::DrawSetTextColor)
            , ( bp::arg("color") ) )    
        .def( 
            "DrawSetTextColor"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawSetTextColor)
            , ( bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a") ) )    
        .def( 
            "DrawSetTextFont"
            , (void ( Image_wrapper::* )( ::vgui::HFont ) )(&Image_wrapper::DrawSetTextFont)
            , ( bp::arg("font") ) )    
        .def( 
            "DrawSetTextPos"
            , (void ( Image_wrapper::* )( int,int ) )(&Image_wrapper::DrawSetTextPos)
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "DrawSetTexture"
            , (void ( Image_wrapper::* )( int ) )(&Image_wrapper::DrawSetTexture)
            , ( bp::arg("id") ) )    
        .def( 
            "DrawTexturedRect"
            , (void ( Image_wrapper::* )( int,int,int,int ) )(&Image_wrapper::DrawTexturedRect)
            , ( bp::arg("x0"), bp::arg("y0"), bp::arg("x1"), bp::arg("y1") ) )    
        .def( 
            "Evict"
            , (bool ( ::vgui::Image::* )(  ) )(&::vgui::Image::Evict)
            , (bool ( Image_wrapper::* )(  ) )(&Image_wrapper::default_Evict) )    
        .def( 
            "GetColor"
            , (::Color ( ::vgui::Image::* )(  ) )( &::vgui::Image::GetColor ) )    
        .def( 
            "GetContentSize"
            , (boost::python::tuple (*)( ::vgui::Image & ))( &Image_wrapper::default_GetContentSize )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetID"
            , (::vgui::HTexture ( ::vgui::Image::* )(  ) )(&::vgui::Image::GetID)
            , (::vgui::HTexture ( Image_wrapper::* )(  ) )(&Image_wrapper::default_GetID) )    
        .def( 
            "GetNumFrames"
            , (int ( ::vgui::Image::* )(  ) )(&::vgui::Image::GetNumFrames)
            , (int ( Image_wrapper::* )(  ) )(&Image_wrapper::default_GetNumFrames) )    
        .def( 
            "GetPos"
            , (boost::python::tuple (*)( ::vgui::Image & ))( &Image_wrapper::default_GetPos )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetSize"
            , (boost::python::tuple (*)( ::vgui::Image & ))( &Image_wrapper::default_GetSize )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetTall"
            , (int ( ::vgui::Image::* )(  ) )(&::vgui::Image::GetTall)
            , (int ( Image_wrapper::* )(  ) )(&Image_wrapper::default_GetTall) )    
        .def( 
            "GetWide"
            , (int ( ::vgui::Image::* )(  ) )(&::vgui::Image::GetWide)
            , (int ( Image_wrapper::* )(  ) )(&Image_wrapper::default_GetWide) )    
        .def( 
            "SetBkColor"
            , (void ( ::vgui::Image::* )( ::Color ) )( &::vgui::Image::SetBkColor )
            , ( bp::arg("color") ) )    
        .def( 
            "SetColor"
            , (void ( ::vgui::Image::* )( ::Color ) )( &::vgui::Image::SetColor )
            , ( bp::arg("color") ) )    
        .def( 
            "SetFrame"
            , (void ( ::vgui::Image::* )( int ) )(&::vgui::Image::SetFrame)
            , (void ( Image_wrapper::* )( int ) )(&Image_wrapper::default_SetFrame)
            , ( bp::arg("nFrame") ) )    
        .def( 
            "SetPos"
            , (void ( ::vgui::Image::* )( int,int ) )( &::vgui::Image::SetPos )
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "SetRotation"
            , (void ( ::vgui::Image::* )( int ) )(&::vgui::Image::SetRotation)
            , (void ( Image_wrapper::* )( int ) )(&Image_wrapper::default_SetRotation)
            , ( bp::arg("iRotation") ) )    
        .def( 
            "SetSize"
            , (void ( Image_wrapper::* )( int,int ) )(&Image_wrapper::SetSize)
            , ( bp::arg("wide"), bp::arg("tall") ) );

}
