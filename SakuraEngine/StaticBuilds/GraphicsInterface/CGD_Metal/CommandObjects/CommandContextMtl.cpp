/*
 * @CopyRight: MIT License
 * Copyright (c) 2020 SaeruHikari
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THESOFTWARE.
 * 
 * 
 * @Description: 
 * @Version: 0.1.0
 * @Autor: SaeruHikari
 * @Date: 2020-04-29 01:39:13
 * @LastEditTime: 2020-04-30 01:15:54
 */
#include "CommandContextMtl.h"
#include "../mtlpp/mtlpp.hpp"

using namespace Sakura::Graphics::Mtl;

void CommandContextMtl::Begin() 
{
    
}

void CommandContextMtl::End()
{

}

void CommandContextMtl::BeginRenderPass(GraphicsPipeline* gp,
    const RenderTargetSet& rts)
{

}

void CommandContextMtl::EndRenderPass()
{

}

void CommandContextMtl::BeginComputePass(ComputePipeline* cp)
{
    
}

void CommandContextMtl::DispatchCompute(uint32 groupCountX, 
    uint32 groupCountY, uint32 groupCountZ)
{
    
}

void CommandContextMtl::Draw(uint32 vertexCount, uint32 instanceCount,
    uint32 firstVertex, uint32 firstInstance)
{
    
}

void CommandContextMtl::DrawIndexed(const uint32 indicesCount,
    const uint32 instanceCount)
{
    
}

void CommandContextMtl::BindVertexBuffer(const GpuBuffer& vb)
{
    
}

void CommandContextMtl::BindIndexBuffer(const GpuBuffer& ib,
    const IndexBufferStride stride)
{
    
}

void CommandContextMtl::BindRootArguments(const PipelineBindPoint bindPoint,
    const RootArgument** arguments, uint32 argumentNum)
{
    
}

void CommandContextMtl::CopyResource(GpuBuffer& src, GpuBuffer& dst,
    const uint64_t srcOffset,
    const uint64_t dstOffset, const uint64_t size)
{

}

void CommandContextMtl::CopyResource(GpuBuffer& src, GpuTexture& dst,
    const uint32_t imageWidth, const uint32_t imageHeight,
    const ImageAspectFlags aspectFlags, const uint64_t srcOffset)
{

}

void CommandContextMtl::CopyResource(GpuBuffer& src, GpuTexture& dst,
    const BufferImageCopy& info)
{

}

void CommandContextMtl::ResourceBarrier(GpuBuffer& toTransition)
{

}

void CommandContextMtl::ResourceBarrier(GpuTexture& toTransition,
    const ImageLayout oldLayout, const ImageLayout newLayout,
    const TextureSubresourceRange& subres)
{
    
}

void CommandContextMtl::GenerateMipmaps(GpuTexture& texture, Format format,
    uint32_t texWidth, uint32_t texHeight, uint32_t mipLevels)
{
    
}