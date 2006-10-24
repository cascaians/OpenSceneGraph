// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/AnimationPath>
#include <osg/ApplicationUsage>
#include <osg/ArgumentParser>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Quat>
#include <osg/Vec3>
#include <osgGA/EventQueue>
#include <osgGA/EventVisitor>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/MatrixManipulator>
#include <osgProducer/KeyboardMouseCallback>
#include <osgProducer/OsgCameraGroup>
#include <osgProducer/Viewer>
#include <osgUtil/IntersectVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >, osgProducer::Viewer::EventHandlerList);

BEGIN_ENUM_REFLECTOR(osgProducer::Viewer::ViewerOptions)
	I_EnumLabel(osgProducer::Viewer::NO_EVENT_HANDLERS);
	I_EnumLabel(osgProducer::Viewer::TRACKBALL_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::DRIVE_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::FLIGHT_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::TERRAIN_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::UFO_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::STATE_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::HEAD_LIGHT_SOURCE);
	I_EnumLabel(osgProducer::Viewer::SKY_LIGHT_SOURCE);
	I_EnumLabel(osgProducer::Viewer::STATS_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::VIEWER_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::ESCAPE_SETS_DONE);
	I_EnumLabel(osgProducer::Viewer::STANDARD_SETTINGS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgProducer::Viewer)
	I_BaseType(osgProducer::OsgCameraGroup);
	I_BaseType(osgGA::GUIActionAdapter);
	I_Constructor0(____Viewer,
	               "",
	               "");
	I_Constructor1(IN, Producer::CameraConfig *, cfg,
	               ____Viewer__Producer_CameraConfig_P1,
	               "",
	               "");
	I_Constructor1(IN, const std::string &, configFile,
	               ____Viewer__C5_std_string_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               ____Viewer__osg_ArgumentParser_R1,
	               "",
	               "");
	I_MethodWithDefaults1(void, setUpViewer, IN, unsigned int, options, osgProducer::Viewer::STANDARD_SETTINGS,
	                      __void__setUpViewer__unsigned_int,
	                      "Set up the viewer, allowing to control some aspects of its behavior. ",
	                      " param options One or more of the options defined by the ViewerOptions enumeration, combined using the bitwise OR operator (``|''). ");
	I_Method1(void, setDoneAtElapsedTime, IN, double, elapsedTime,
	          __void__setDoneAtElapsedTime__double,
	          "Set the viewer so it sets done to true once the refrence time equals or exceeds specified elapsed time. ",
	          "Automatically does a setDoneAtElapsedTimeEnabled(true). ");
	I_Method0(double, getDoneAtElapsedTime,
	          __double__getDoneAtElapsedTime,
	          "Get the elapsed time that will cause done to be set to be true. ",
	          "");
	I_Method1(void, setDoneAtElapsedTimeEnabled, IN, bool, enabled,
	          __void__setDoneAtElapsedTimeEnabled__bool,
	          "Set whether to use a elapsed time to limit the run of the viewer. ",
	          "");
	I_Method0(bool, getDoneAtElapsedTimeEnabled,
	          __bool__getDoneAtElapsedTimeEnabled,
	          "Get whether to use a elapsed time to limit the run of the viewer. ",
	          "");
	I_Method1(void, setDoneAtFrameNumber, IN, unsigned int, frameNumber,
	          __void__setDoneAtFrameNumber__unsigned_int,
	          "Set the viewer so it sets done to true once the frame number equals or exceeds specified frame number. ",
	          "Automatically does a setDoneAtFrameNumberEnabled(true). ");
	I_Method0(unsigned int, getDoneAtFrameNumber,
	          __unsigned_int__getDoneAtFrameNumber,
	          "Get the frame number that will cause done to be set to be true. ",
	          "");
	I_Method1(void, setDoneAtFrameNumberEnabled, IN, bool, enabled,
	          __void__setDoneAtFrameNumberEnabled__bool,
	          "Set whether to use a frame number to limit the run of the viewer. ",
	          "");
	I_Method0(bool, getDoneAtFrameNumberEnabled,
	          __bool__getDoneAtFrameNumberEnabled,
	          "Get whether to use a frame number to limit the run of the viewer. ",
	          "");
	I_Method1(void, setDone, IN, bool, done,
	          __void__setDone__bool,
	          "Set the done flag signalling that the viewer exit. ",
	          "");
	I_Method0(bool, getDone,
	          __bool__getDone,
	          "Get the done flag which signals that the viewer exit. ",
	          "");
	I_Method0(bool, done,
	          __bool__done,
	          "Return true if the application is done and should exit. ",
	          "");
	I_Method1(void, setWriteImageWhenDone, IN, bool, enabled,
	          __void__setWriteImageWhenDone__bool,
	          "Set the viewer to take an image snapshot on the last frame() when done is enabled. ",
	          "");
	I_Method0(bool, getWriteImageWhenDone,
	          __bool__getWriteImageWhenDone,
	          "Set the viewer to take an image snapshot on the last frame() when done is enabled. ",
	          "");
	I_Method1(void, setWriteImageFileName, IN, const std::string &, filename,
	          __void__setWriteImageFileName__C5_std_string_R1,
	          "Set the filename to write to when the viewer takes an image snapshot on the last frame() when done is enabled. ",
	          "");
	I_Method0(const std::string &, getWriteImageFileName,
	          __C5_std_string_R1__getWriteImageFileName,
	          "Get the filename to write to when the viewer takes an image snapshot on the last frame() when done is enabled. ",
	          "");
	I_Method1(void, setViewByMatrix, IN, const Producer::Matrix &, pm,
	          __void__setViewByMatrix__C5_Producer_Matrix_R1,
	          "Override the Producer::CameraGroup::setViewByMatrix to catch all changes to view. ",
	          "");
	I_Method1(bool, realize, IN, osgProducer::OsgCameraGroup::ThreadingModel, thread_model,
	          __bool__realize__ThreadingModel,
	          "Set the threading model and then call realize(). ",
	          "");
	I_Method0(bool, realize,
	          __bool__realize,
	          "Realize the render surfaces (OpenGL graphics) and various threads, and call any realize callbacks. ",
	          "");
	I_Method0(void, update,
	          __void__update,
	          "Updated the scene. ",
	          "Handle any queued up events, do an update traversal and set the CameraGroup's setViewByMatrix if any camera manipulators are active. ");
	I_Method1(void, setUpdateVisitor, IN, osg::NodeVisitor *, nv,
	          __void__setUpdateVisitor__osg_NodeVisitor_P1,
	          "Set the update visitor which does the update traversal of the scene graph. ",
	          "Automatically called by the update() method. ");
	I_Method0(osg::NodeVisitor *, getUpdateVisitor,
	          __osg_NodeVisitor_P1__getUpdateVisitor,
	          "Get the update visitor. ",
	          "");
	I_Method0(const osg::NodeVisitor *, getUpdateVisitor,
	          __C5_osg_NodeVisitor_P1__getUpdateVisitor,
	          "Get the const update visitor. ",
	          "");
	I_Method1(void, setEventVisitor, IN, osgGA::EventVisitor *, nv,
	          __void__setEventVisitor__osgGA_EventVisitor_P1,
	          "Set the update visitor which does the event traversal of the scene graph. ",
	          "Automatically called by the update() method. ");
	I_Method0(osgGA::EventVisitor *, getEventVisitor,
	          __osgGA_EventVisitor_P1__getEventVisitor,
	          "Get the update visitor. ",
	          "");
	I_Method0(const osgGA::EventVisitor *, getEventVisitor,
	          __C5_osgGA_EventVisitor_P1__getEventVisitor,
	          "Get the const update visitor. ",
	          "");
	I_Method0(void, computeActiveCoordinateSystemNodePath,
	          __void__computeActiveCoordinateSystemNodePath,
	          "",
	          "");
	I_Method1(void, setCoordinateSystemNodePath, IN, const osg::NodePath &, nodePath,
	          __void__setCoordinateSystemNodePath__C5_osg_NodePath_R1,
	          "",
	          "");
	I_Method0(osg::NodePath, getCoordinateSystemNodePath,
	          __osg_NodePath__getCoordinateSystemNodePath,
	          "",
	          "");
	I_Method0(void, frame,
	          __void__frame,
	          "Dispatch the cull and draw for each of the Camera's for this frame. ",
	          "");
	I_Method0(void, requestRedraw,
	          __void__requestRedraw,
	          "requestRedraw() requests a single redraw. ",
	          "");
	I_Method1(void, requestContinuousUpdate, IN, bool, x,
	          __void__requestContinuousUpdate__bool,
	          "requestContinousUpdate(bool) is for en/disabling a throw or idle callback to be requested by a GUIEventHandler (typically a MatrixManipulator, though other GUIEventHandler's may also provide functionality). ",
	          "GUI toolkits can respond to this immediately by registering an idle/timed callback, or can delay setting the callback and update at their own leisure.");
	I_Method2(void, requestWarpPointer, IN, float, x, IN, float, y,
	          __void__requestWarpPointer__float__float,
	          "requestWarpPointer(int,int) is requesting a repositioning of the mouse pointer to a specified x,y location on the window. ",
	          "This is used by some camera manipulators to initialise the mouse pointer when mouse position relative to a controls neutral mouse position is required, i.e when mimicking a aircrafts joystick.");
	I_Method5(bool, computePixelCoords, IN, float, x, IN, float, y, IN, unsigned int, cameraNum, IN, float &, pixel_x, IN, float &, pixel_y,
	          __bool__computePixelCoords__float__float__unsigned_int__float_R1__float_R1,
	          "Compute, from normalized mouse coords, for sepecified Camera, the pixel coords relative to that Camera's RenderSurface. ",
	          "");
	I_Method5(bool, computeNearFarPoints, IN, float, x, IN, float, y, IN, unsigned int, cameraNum, IN, osg::Vec3 &, near, IN, osg::Vec3 &, far,
	          __bool__computeNearFarPoints__float__float__unsigned_int__osg_Vec3_R1__osg_Vec3_R1,
	          "Compute, from normalized mouse coords, for sepecified Camera, the near and far points in worlds coords. ",
	          "");
	I_MethodWithDefaults6(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, unsigned int, cameraNum, , IN, osg::Node *, node, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      __bool__computeIntersections__float__float__unsigned_int__osg_Node_P1__osgUtil_IntersectVisitor_HitList_R1__osg_Node_NodeMask,
	                      "Compute, from normalized mouse coords, for all Cameras, intersections with the specified subgraph. ",
	                      "");
	I_MethodWithDefaults5(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, unsigned int, cameraNum, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      __bool__computeIntersections__float__float__unsigned_int__osgUtil_IntersectVisitor_HitList_R1__osg_Node_NodeMask,
	                      "Compute, from normalized mouse coords, for sepecified Camera, intersections with the scene. ",
	                      "");
	I_MethodWithDefaults5(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, osg::Node *, node, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      __bool__computeIntersections__float__float__osg_Node_P1__osgUtil_IntersectVisitor_HitList_R1__osg_Node_NodeMask,
	                      "Compute, from normalized mouse coords, for all Cameras, intersections with specified subgraph. ",
	                      "");
	I_MethodWithDefaults4(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      __bool__computeIntersections__float__float__osgUtil_IntersectVisitor_HitList_R1__osg_Node_NodeMask,
	                      "Compute, from normalized mouse coords, for all Cameras, intersections with the scene. ",
	                      "");
	I_Method1(void, setEventQueue, IN, osgGA::EventQueue *, eventQueue,
	          __void__setEventQueue__osgGA_EventQueue_P1,
	          "Set the EventQueue - a thread safe queue for registering events. ",
	          "");
	I_Method0(osgGA::EventQueue *, getEventQueue,
	          __osgGA_EventQueue_P1__getEventQueue,
	          "Get the EventQueue. ",
	          "");
	I_Method1(void, setKeyboardMouse, IN, Producer::KeyboardMouse *, kbm,
	          __void__setKeyboardMouse__Producer_KeyboardMouse_P1,
	          "",
	          "");
	I_Method0(Producer::KeyboardMouse *, getKeyboardMouse,
	          __Producer_KeyboardMouse_P1__getKeyboardMouse,
	          "",
	          "");
	I_Method0(const Producer::KeyboardMouse *, getKeyboardMouse,
	          __C5_Producer_KeyboardMouse_P1__getKeyboardMouse,
	          "",
	          "");
	I_Method1(void, setKeyboardMouseCallback, IN, osgProducer::KeyboardMouseCallback *, kbmcb,
	          __void__setKeyboardMouseCallback__osgProducer_KeyboardMouseCallback_P1,
	          "",
	          "");
	I_Method0(osgProducer::KeyboardMouseCallback *, getKeyboardMouseCallback,
	          __osgProducer_KeyboardMouseCallback_P1__getKeyboardMouseCallback,
	          "",
	          "");
	I_Method0(const osgProducer::KeyboardMouseCallback *, getKeyboardMouseCallback,
	          __C5_osgProducer_KeyboardMouseCallback_P1__getKeyboardMouseCallback,
	          "",
	          "");
	I_Method0(osgProducer::Viewer::EventHandlerList &, getEventHandlerList,
	          __EventHandlerList_R1__getEventHandlerList,
	          "",
	          "");
	I_Method0(const osgProducer::Viewer::EventHandlerList &, getEventHandlerList,
	          __C5_EventHandlerList_R1__getEventHandlerList,
	          "",
	          "");
	I_Method0(osgGA::KeySwitchMatrixManipulator *, getKeySwitchMatrixManipulator,
	          __osgGA_KeySwitchMatrixManipulator_P1__getKeySwitchMatrixManipulator,
	          "",
	          "");
	I_Method0(const osgGA::KeySwitchMatrixManipulator *, getKeySwitchMatrixManipulator,
	          __C5_osgGA_KeySwitchMatrixManipulator_P1__getKeySwitchMatrixManipulator,
	          "",
	          "");
	I_Method1(unsigned int, addCameraManipulator, IN, osgGA::MatrixManipulator *, cm,
	          __unsigned_int__addCameraManipulator__osgGA_MatrixManipulator_P1,
	          "",
	          "");
	I_Method1(void, selectCameraManipulator, IN, unsigned int, no,
	          __void__selectCameraManipulator__unsigned_int,
	          "",
	          "");
	I_Method1(void, getCameraManipulatorNameList, IN, std::list< std::string > &, nameList,
	          __void__getCameraManipulatorNameList__std_listT1_std_string__R1,
	          "",
	          "");
	I_Method1(bool, selectCameraManipulatorByName, IN, const std::string &, name,
	          __bool__selectCameraManipulatorByName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osgGA::MatrixManipulator *, getCameraManipulatorByName, IN, const std::string &, name,
	          __osgGA_MatrixManipulator_P1__getCameraManipulatorByName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setRecordingAnimationPath, IN, bool, on,
	          __void__setRecordingAnimationPath__bool,
	          "",
	          "");
	I_Method0(bool, getRecordingAnimationPath,
	          __bool__getRecordingAnimationPath,
	          "",
	          "");
	I_Method1(void, setAnimationPath, IN, osg::AnimationPath *, path,
	          __void__setAnimationPath__osg_AnimationPath_P1,
	          "",
	          "");
	I_Method0(osg::AnimationPath *, getAnimationPath,
	          __osg_AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method0(const osg::AnimationPath *, getAnimationPath,
	          __C5_osg_AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method0(const double *, getPosition,
	          __C5_double_P1__getPosition,
	          "",
	          "");
	I_Method0(double, getSpeed,
	          __double__getSpeed,
	          "",
	          "");
	I_Method0(osg::Quat, getOrientation,
	          __osg_Quat__getOrientation,
	          "",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this viewer. ",
	          "");
	I_Method0(void, updatedSceneData,
	          __void__updatedSceneData,
	          "Update internal structures w.r.t updated scene data. ",
	          "");
	I_Method0(void, cleanup_frame,
	          __void__cleanup_frame,
	          "Dispatch a clean up frame that should be called before closing a OsgCameraGroup, i.e. ",
	          "on exit from an app. The clean up frame first release all GL objects associated with all the graphics context associated with the camera group, then runs a special frame that does the actual OpenGL deletion of GL objects for each graphics context. ");
	I_StaticMethod0(const char *, getDefaultImageFileName,
	                __C5_char_P1__getDefaultImageFileName_S,
	                "Get the default filename for writing an image snapshot. ",
	                "");
	I_SimpleProperty(osg::AnimationPath *, AnimationPath, 
	                 __osg_AnimationPath_P1__getAnimationPath, 
	                 __void__setAnimationPath__osg_AnimationPath_P1);
	I_SimpleProperty(osg::NodePath, CoordinateSystemNodePath, 
	                 __osg_NodePath__getCoordinateSystemNodePath, 
	                 __void__setCoordinateSystemNodePath__C5_osg_NodePath_R1);
	I_SimpleProperty(bool, Done, 
	                 __bool__getDone, 
	                 __void__setDone__bool);
	I_SimpleProperty(double, DoneAtElapsedTime, 
	                 __double__getDoneAtElapsedTime, 
	                 __void__setDoneAtElapsedTime__double);
	I_SimpleProperty(bool, DoneAtElapsedTimeEnabled, 
	                 __bool__getDoneAtElapsedTimeEnabled, 
	                 __void__setDoneAtElapsedTimeEnabled__bool);
	I_SimpleProperty(unsigned int, DoneAtFrameNumber, 
	                 __unsigned_int__getDoneAtFrameNumber, 
	                 __void__setDoneAtFrameNumber__unsigned_int);
	I_SimpleProperty(bool, DoneAtFrameNumberEnabled, 
	                 __bool__getDoneAtFrameNumberEnabled, 
	                 __void__setDoneAtFrameNumberEnabled__bool);
	I_SimpleProperty(osgProducer::Viewer::EventHandlerList &, EventHandlerList, 
	                 __EventHandlerList_R1__getEventHandlerList, 
	                 0);
	I_SimpleProperty(osgGA::EventQueue *, EventQueue, 
	                 __osgGA_EventQueue_P1__getEventQueue, 
	                 __void__setEventQueue__osgGA_EventQueue_P1);
	I_SimpleProperty(osgGA::EventVisitor *, EventVisitor, 
	                 __osgGA_EventVisitor_P1__getEventVisitor, 
	                 __void__setEventVisitor__osgGA_EventVisitor_P1);
	I_SimpleProperty(osgGA::KeySwitchMatrixManipulator *, KeySwitchMatrixManipulator, 
	                 __osgGA_KeySwitchMatrixManipulator_P1__getKeySwitchMatrixManipulator, 
	                 0);
	I_SimpleProperty(Producer::KeyboardMouse *, KeyboardMouse, 
	                 __Producer_KeyboardMouse_P1__getKeyboardMouse, 
	                 __void__setKeyboardMouse__Producer_KeyboardMouse_P1);
	I_SimpleProperty(osgProducer::KeyboardMouseCallback *, KeyboardMouseCallback, 
	                 __osgProducer_KeyboardMouseCallback_P1__getKeyboardMouseCallback, 
	                 __void__setKeyboardMouseCallback__osgProducer_KeyboardMouseCallback_P1);
	I_SimpleProperty(osg::Quat, Orientation, 
	                 __osg_Quat__getOrientation, 
	                 0);
	I_SimpleProperty(const double *, Position, 
	                 __C5_double_P1__getPosition, 
	                 0);
	I_SimpleProperty(bool, RecordingAnimationPath, 
	                 __bool__getRecordingAnimationPath, 
	                 __void__setRecordingAnimationPath__bool);
	I_SimpleProperty(double, Speed, 
	                 __double__getSpeed, 
	                 0);
	I_SimpleProperty(unsigned int, UpViewer, 
	                 0, 
	                 __void__setUpViewer__unsigned_int);
	I_SimpleProperty(osg::NodeVisitor *, UpdateVisitor, 
	                 __osg_NodeVisitor_P1__getUpdateVisitor, 
	                 __void__setUpdateVisitor__osg_NodeVisitor_P1);
	I_SimpleProperty(const Producer::Matrix &, ViewByMatrix, 
	                 0, 
	                 __void__setViewByMatrix__C5_Producer_Matrix_R1);
	I_SimpleProperty(const std::string &, WriteImageFileName, 
	                 __C5_std_string_R1__getWriteImageFileName, 
	                 __void__setWriteImageFileName__C5_std_string_R1);
	I_SimpleProperty(bool, WriteImageWhenDone, 
	                 __bool__getWriteImageWhenDone, 
	                 __void__setWriteImageWhenDone__bool);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< std::string >);

