/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2016 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "westeros-gl.h"



/*
 * WstGLNativePixmap:
 */
typedef struct _WstGLNativePixmap
{
   void *pixmap;
   int width;
   int height;
} WstNativePixmap;

typedef struct _WstGLNativeWindow
{
   public:
     void swap() {} 
   private:
} WstGLNativeWindow;

typedef struct _WstGLCtx 
{
  int displayId;
  int displayWidth;
  int displayHeight;
} WstGLCtx;

static int ctxCount= 0;

WstGLCtx* WstGLInit()
{
   WstGLCtx *ctx= 0;
   ctx= (WstGLCtx*)calloc( 1, sizeof(WstGLCtx) );
   return ctx;
}

void WstGLTerm( WstGLCtx *ctx )
{
// Not yet required
      free( ctx );
}

/*
 * WstGLCreateNativeWindow
 * Create a native window suitable for use as an EGLNativeWindow
 */
void* WstGLCreateNativeWindow( WstGLCtx *ctx, int x, int y, int width, int height )
{
   void *nativeWindow= 0;
// Not yet required 
   return nativeWindow;   
}

/*
 * WstGLDestroyNativeWindow
 * Destroy a native window created by WstGLCreateNativeWindow
 */
void WstGLDestroyNativeWindow( WstGLCtx *ctx, void *nativeWindow )
{
// Not yet required

}

bool WstGLGetNativePixmap( WstGLCtx *ctx, void *nativeBuffer, void **nativePixmap )
{
   bool result= false;
    
   if ( ctx )
   {
      // Not yet required
   }
   
   return result;
}

/*
 * WstGLGetNativePixmapDimensions
 * Get the dimensions of the WstGLNativePixmap
 */
void WstGLGetNativePixmapDimensions( WstGLCtx *ctx, void *nativePixmap, int *width, int *height )
{
   if ( ctx )
   {
      // Not yet required
   }
}

/*
 * WstGLReleaseNativePixmap
 * Release a WstGLNativePixmap obtained via WstGLGetNativePixmap
 */
void WstGLReleaseNativePixmap( WstGLCtx *ctx, void *nativePixmap )
{
   if ( ctx )
   {
      // Not yet required
   }
}

/*
 * WstGLGetEGLNativePixmap
 * Get the native pixmap usable as a EGL_NATIVE_PIXMAP_KHR for creating a texture
 * from the provided WstGLNativePixmap instance
 */
EGLNativePixmapType WstGLGetEGLNativePixmap( WstGLCtx *ctx, void *nativePixmap )
{
   EGLNativePixmapType eglPixmap= 0;
   
   if ( nativePixmap )
   {
      // Not yet required
   }
   
   return eglPixmap;
}

