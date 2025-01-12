// This file is part of RemoteCL.

// RemoteCL is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// RemoteCL is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public License
// along with RemoteCL.  If not, see <https://www.gnu.org/licenses/>.

/// @file icd.cpp
/// Defines the ICD dispatch table.
#include "objects.h"

KHRicdVendorDispatch RemoteCL::Client::OCLDispatchTable =
{
	clGetPlatformIDs,
	clGetPlatformInfo,
	clGetDeviceIDs,
	clGetDeviceInfo,
	clCreateContext,
	clCreateContextFromType,
	clRetainContext,
	clReleaseContext,
	clGetContextInfo,
	clCreateCommandQueue,
	clRetainCommandQueue,
	clReleaseCommandQueue,
	clGetCommandQueueInfo,
	nullptr, //clSetCommandQueueProperty,
	clCreateBuffer,
	clCreateImage2D,
	clCreateImage3D,
	clRetainMemObject,
	clReleaseMemObject,
	clGetSupportedImageFormats,
	clGetMemObjectInfo,
	clGetImageInfo,
	nullptr, //clCreateSampler,
	nullptr, //clRetainSampler,
	nullptr, //clReleaseSampler,
	nullptr, //clGetSamplerInfo,
	clCreateProgramWithSource,
	clCreateProgramWithBinary,
	clRetainProgram,
	clReleaseProgram,
	clBuildProgram,
	nullptr, //clUnloadCompiler,
	clGetProgramInfo,
	clGetProgramBuildInfo,
	clCreateKernel,
	nullptr, //clCreateKernelsInProgram,
	clRetainKernel,
	clReleaseKernel,
	clSetKernelArg,
	nullptr, //clGetKernelInfo,
	nullptr, //clGetKernelWorkGroupInfo,
	clWaitForEvents,
	nullptr, //clGetEventInfo,
	clRetainEvent,
	clReleaseEvent,
	nullptr, //clGetEventProfilingInfo,
	nullptr, //clFlush,
	clFinish,
	clEnqueueReadBuffer,
	clEnqueueWriteBuffer,
	nullptr, //clEnqueueCopyBuffer,
	clEnqueueReadImage,
	clEnqueueWriteImage,
	nullptr, //clEnqueueCopyImage,
	nullptr, //clEnqueueCopyImageToBuffer,
	nullptr, //clEnqueueCopyBufferToImage,
	clEnqueueMapBuffer,
	nullptr, //clEnqueueMapImage,
	clEnqueueUnmapMemObject,
	clEnqueueNDRangeKernel,
	nullptr, //clEnqueueTask,
	nullptr, //clEnqueueNativeKernel,
	nullptr, //clEnqueueMarker,
	nullptr, //clEnqueueWaitForEvents,
	nullptr, //clEnqueueBarrier,
	nullptr, //clGetExtensionFunctionAddress,
	nullptr, //clCreateFromGLBuffer,
	nullptr, //clCreateFromGLTexture2D,
	nullptr, //clCreateFromGLTexture3D,
	nullptr, //clCreateFromGLRenderbuffer,
	nullptr, //clGetGLObjectInfo,
	nullptr, //clGetGLTextureInfo,
	nullptr, //clEnqueueAcquireGLObjects,
	nullptr, //clEnqueueReleaseGLObjects,
	nullptr, //clGetGLContextInfoKHR,
	nullptr, //clGetDeviceIDsFromD3D10KHR,
	nullptr, //clCreateFromD3D10BufferKHR,
	nullptr, //clCreateFromD3D10Texture2DKHR,
	nullptr, //clCreateFromD3D10Texture3DKHR,
	nullptr, //clEnqueueAcquireD3D10ObjectsKHR,
	nullptr, //clEnqueueReleaseD3D10ObjectsKHR,
	clSetEventCallback,
	clCreateSubBuffer,
	nullptr, //clSetMemObjectDestructorCallback,
	clCreateUserEvent,
	clSetUserEventStatus,
	clEnqueueReadBufferRect,
	nullptr, //clEnqueueWriteBufferRect,
	nullptr, //clEnqueueCopyBufferRect,
	nullptr, //clCreateSubDevicesEXT,
	nullptr, //clRetainDeviceEXT,
	nullptr, //clReleaseDeviceEXT,
	nullptr, //clCreateEventFromGLsyncKHR,
	nullptr, //clCreateSubDevices,
	clRetainDevice,
	clReleaseDevice,
	clCreateImage,
	nullptr, //clCreateProgramWithBuiltInKernels,
	nullptr, //clCompileProgram,
	nullptr, //clLinkProgram,
	nullptr, //clUnloadPlatformCompiler,
	nullptr, //clGetKernelArgInfo,
	clEnqueueFillBuffer,
	nullptr, //clEnqueueFillImage,
	nullptr, //clEnqueueMigrateMemObjects,
	nullptr, //clEnqueueMarkerWithWaitList,
	nullptr, //clEnqueueBarrierWithWaitList,
	nullptr, //clGetExtensionFunctionAddressForPlatform,
	nullptr, //clCreateFromGLTexture,
	nullptr, //clGetDeviceIDsFromD3D11KHR,
	nullptr, //clCreateFromD3D11BufferKHR,
	nullptr, //clCreateFromD3D11Texture2DKHR,
	nullptr, //clCreateFromD3D11Texture3DKHR,
	nullptr, //clCreateFromDX9MediaSurfaceKHR,
	nullptr, //clEnqueueAcquireD3D11ObjectsKHR,
	nullptr, //clEnqueueReleaseD3D11ObjectsKHR,
	nullptr, //clGetDeviceIDsFromDX9MediaAdapterKHR,
	nullptr, //clEnqueueAcquireDX9MediaSurfacesKHR,
	nullptr, //clEnqueueReleaseDX9MediaSurfacesKHR,
	nullptr, //clCreateFromEGLImageKHR,
	nullptr, //clEnqueueAcquireEGLObjectsKHR,
	nullptr, //clEnqueueReleaseEGLObjectsKHR,
	nullptr, //clCreateEventFromEGLSyncKHR,

	// CL 2.0
	clCreateCommandQueueWithProperties,
	nullptr, //clCreatePipe,
	nullptr, //clGetPipeInfo,
	nullptr, //clSVMAlloc,
	nullptr, //clSVMFree,
	nullptr, //clEnqueueSVMFree,
	nullptr, //clEnqueueSVMMemcpy,
	nullptr, //clEnqueueSVMMemFill,
	nullptr, //clEnqueueSVMMap,
	nullptr, //clEnqueueSVMUnmap,
	nullptr, //clCreateSamplerWithProperties,
	nullptr, //clSetKernelArgSVMPointer,
	nullptr, //clSetKernelExecInfo,
	nullptr, //clGetKernelSubGroupInfoKHR,

	// CL 2.1
	clCloneKernel,
	nullptr, //clCreateProgramWithIL,
	nullptr, //clEnqueueSVMMigrateMem,
	nullptr, //clGetDeviceAndHostTimer,
	nullptr, //clGetHostTimer,
	nullptr, //clGetKernelSubGroupInfo,
	nullptr, //clSetDefaultDeviceCommandQueue,

	// CL 2.2
	nullptr, //clSetProgramReleaseCallback,
	nullptr //clSetProgramSpecializationConstant
};
