// LJS05-30.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <D3DX11.h>
#include <D3D11.h>
#include <xnamath.h>

void PrintVector(FXMVECTOR v);

int main()
{
	XMMATRIX matScale{};
	XMMATRIX matRotation{};
	XMMATRIX matLocation{};
	XMFLOAT3 f3Pos{};
	XMVECTOR vPos{};
	XMVECTOR vResult{};
	

	f3Pos = XMFLOAT3(3.0f, 1.0f, 1.0f);
	matScale = XMMatrixIdentity();
	matRotation = XMMatrixIdentity();
	matLocation = XMMatrixIdentity();

	vPos = XMLoadFloat3(&f3Pos);
	matScale = XMMatrixScaling(2.0f, 2.0f, 2.0f);
	vResult = XMVector3Transform(vPos, matScale);
	PrintVector(vResult);

	matLocation = XMMatrixTranslation(5.0f, 0.0f, 0.0f);
	vResult = XMVector3Transform(vPos, matLocation);
	PrintVector(vResult);
}

void PrintVector(FXMVECTOR v)
{
	printf("%f, %f, %f\n", v.m128_f32[0], v.m128_f32[1], v.m128_f32[2]);
}
