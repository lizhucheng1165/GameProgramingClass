// LJS05-29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <D3D11.h> //다렉 기본모듈1
#include <D3DX11.h> //다렉 기본모듈2
#include <xnamath.h> //다렉 수학모듈

int main()
{
	XMVECTOR v1{};

	v1.m128_f32[0] = 10.0f;

	//printf("%f\n", v1.m128_f32[0]);

	XMFLOAT3 f3{};

	f3.x = 1.0f;

	v1 = XMLoadFloat3(&f3);
	printf("%f\n", v1.m128_f32[0]);

	v1.m128_f32[2] = 9.9f;
	XMStoreFloat3(&f3, v1);

	printf("%f, %f, %f \n", f3.x, f3.y, f3.z);
}
