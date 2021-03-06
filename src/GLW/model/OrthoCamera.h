/*
 * OrthoCamera.h
 *
 *  Created on: Feb 17, 2020
 *      Author: timotey
 */

#ifndef GLW_CAMERA_ORTHOCAMERA_H_
#define GLW_CAMERA_ORTHOCAMERA_H_

#include "Camera.h"

namespace glw
{

class OrthoCamera: public virtual Camera
{
protected:
	void setCameraMat() override;
private:
	virtual Camera* self_clone() const override
	{
		return new OrthoCamera(*this);
	}
public:
	OrthoCamera(float _aspectRatio = 3.0f / 4.0f) :
			Camera(_aspectRatio)
	{
		this->_cameramatupdate();
	}
	virtual ~OrthoCamera() = default;
	OrthoCamera(const OrthoCamera& other) = default;
	OrthoCamera(OrthoCamera&& other) = default;
	OrthoCamera& operator=(const OrthoCamera& other) = default;
	OrthoCamera& operator=(OrthoCamera&& other) = default;
};

} /* namespace glw */

#endif /* GLW_CAMERA_ORTHOCAMERA_H_ */
