void func_00102150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00102150: addiu $sp, $sp, -0x30
    func_00101e38();  // 0x101e20                                // 0x00102164: jal 0x101e20
    if (v0 != 0) goto label_0x1022a0;                           // 0x0010216c: bnez $v0, 0x1022a0
    VPU_VF0 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x00102174: ldc2 $0, 0($s1)
    VPU_VF1 = *(vec128_t*)((s1) + 0x10);  // Load 128-bit vector // 0x00102178: ldc2 $1, 0x10($s1)
    VPU_VF2 = *(vec128_t*)((s1) + 0x20);  // Load 128-bit vector // 0x0010217c: ldc2 $2, 0x20($s1)
    VPU_VF3 = *(vec128_t*)((s1) + 0x30);  // Load 128-bit vector // 0x00102180: ldc2 $3, 0x30($s1)
    VPU_VF4 = *(vec128_t*)((s1) + 0x40);  // Load 128-bit vector // 0x00102184: ldc2 $4, 0x40($s1)
    VPU_VF5 = *(vec128_t*)((s1) + 0x50);  // Load 128-bit vector // 0x00102188: ldc2 $5, 0x50($s1)
    VPU_VF6 = *(vec128_t*)((s1) + 0x60);  // Load 128-bit vector // 0x0010218c: ldc2 $6, 0x60($s1)
    VPU_VF7 = *(vec128_t*)((s1) + 0x70);  // Load 128-bit vector // 0x00102190: ldc2 $7, 0x70($s1)
    VPU_VF8 = *(vec128_t*)((s1) + 0x80);  // Load 128-bit vector // 0x00102194: ldc2 $8, 0x80($s1)
    VPU_VF9 = *(vec128_t*)((s1) + 0x90);  // Load 128-bit vector // 0x00102198: ldc2 $9, 0x90($s1)
    VPU_VF10 = *(vec128_t*)((s1) + 0xa0);  // Load 128-bit vector // 0x0010219c: ldc2 $10, 0xa0($s1)
    VPU_VF11 = *(vec128_t*)((s1) + 0xb0);  // Load 128-bit vector // 0x001021a0: ldc2 $11, 0xb0($s1)
    VPU_VF12 = *(vec128_t*)((s1) + 0xc0);  // Load 128-bit vector // 0x001021a4: ldc2 $12, 0xc0($s1)
    VPU_VF13 = *(vec128_t*)((s1) + 0xd0);  // Load 128-bit vector // 0x001021a8: ldc2 $13, 0xd0($s1)
    VPU_VF14 = *(vec128_t*)((s1) + 0xe0);  // Load 128-bit vector // 0x001021ac: ldc2 $14, 0xe0($s1)
    VPU_VF15 = *(vec128_t*)((s1) + 0xf0);  // Load 128-bit vector // 0x001021b0: ldc2 $15, 0xf0($s1)
    VPU_VF16 = *(vec128_t*)((s1) + 0x100);  // Load 128-bit vector // 0x001021b4: ldc2 $16, 0x100($s1)
    VPU_VF17 = *(vec128_t*)((s1) + 0x110);  // Load 128-bit vector // 0x001021b8: ldc2 $17, 0x110($s1)
    VPU_VF18 = *(vec128_t*)((s1) + 0x120);  // Load 128-bit vector // 0x001021bc: ldc2 $18, 0x120($s1)
    VPU_VF19 = *(vec128_t*)((s1) + 0x130);  // Load 128-bit vector // 0x001021c0: ldc2 $19, 0x130($s1)
    VPU_VF20 = *(vec128_t*)((s1) + 0x140);  // Load 128-bit vector // 0x001021c4: ldc2 $20, 0x140($s1)
    VPU_VF21 = *(vec128_t*)((s1) + 0x150);  // Load 128-bit vector // 0x001021c8: ldc2 $21, 0x150($s1)
    VPU_VF22 = *(vec128_t*)((s1) + 0x160);  // Load 128-bit vector // 0x001021cc: ldc2 $22, 0x160($s1)
    VPU_VF23 = *(vec128_t*)((s1) + 0x170);  // Load 128-bit vector // 0x001021d0: ldc2 $23, 0x170($s1)
    VPU_VF24 = *(vec128_t*)((s1) + 0x180);  // Load 128-bit vector // 0x001021d4: ldc2 $24, 0x180($s1)
    VPU_VF25 = *(vec128_t*)((s1) + 0x190);  // Load 128-bit vector // 0x001021d8: ldc2 $25, 0x190($s1)
    VPU_VF26 = *(vec128_t*)((s1) + 0x1a0);  // Load 128-bit vector // 0x001021dc: ldc2 $26, 0x1a0($s1)
    VPU_VF27 = *(vec128_t*)((s1) + 0x1b0);  // Load 128-bit vector // 0x001021e0: ldc2 $27, 0x1b0($s1)
    VPU_VF28 = *(vec128_t*)((s1) + 0x1c0);  // Load 128-bit vector // 0x001021e4: ldc2 $28, 0x1c0($s1)
    VPU_VF29 = *(vec128_t*)((s1) + 0x1d0);  // Load 128-bit vector // 0x001021e8: ldc2 $29, 0x1d0($s1)
    VPU_VF30 = *(vec128_t*)((s1) + 0x1e0);  // Load 128-bit vector // 0x001021ec: ldc2 $30, 0x1e0($s1)
    VPU_VF31 = *(vec128_t*)((s1) + 0x1f0);  // Load 128-bit vector // 0x001021f0: ldc2 $31, 0x1f0($s1)
    v0 = *(int32_t*)((s0) + 0x200);                             // 0x001021f4: lw $v0, 0x200($s0)
    v0 = *(int32_t*)((s0) + 0x208);                             // 0x001021fc: lw $v0, 0x208($s0)
    v0 = *(int32_t*)((s0) + 0x20c);                             // 0x00102204: lw $v0, 0x20c($s0)
    v0 = *(int32_t*)((s0) + 0x210);                             // 0x0010220c: lw $v0, 0x210($s0)
    v0 = *(int32_t*)((s0) + 0x214);                             // 0x00102214: lw $v0, 0x214($s0)
    v0 = *(uint16_t*)((s0) + 0x218);                            // 0x0010221c: lhu $v0, 0x218($s0)
    v0 = *(uint16_t*)((s0) + 0x21a);                            // 0x00102224: lhu $v0, 0x21a($s0)
    v0 = *(uint16_t*)((s0) + 0x21c);                            // 0x0010222c: lhu $v0, 0x21c($s0)
    v0 = *(uint16_t*)((s0) + 0x21e);                            // 0x00102234: lhu $v0, 0x21e($s0)
    v0 = *(uint16_t*)((s0) + 0x220);                            // 0x0010223c: lhu $v0, 0x220($s0)
    v0 = *(uint16_t*)((s0) + 0x222);                            // 0x00102244: lhu $v0, 0x222($s0)
    v0 = *(uint16_t*)((s0) + 0x224);                            // 0x0010224c: lhu $v0, 0x224($s0)
    v0 = *(uint16_t*)((s0) + 0x226);                            // 0x00102254: lhu $v0, 0x226($s0)
    v0 = *(uint16_t*)((s0) + 0x228);                            // 0x0010225c: lhu $v0, 0x228($s0)
    v0 = *(uint16_t*)((s0) + 0x22a);                            // 0x00102264: lhu $v0, 0x22a($s0)
    v0 = *(uint16_t*)((s0) + 0x22c);                            // 0x0010226c: lhu $v0, 0x22c($s0)
    v0 = *(uint16_t*)((s0) + 0x22e);                            // 0x00102274: lhu $v0, 0x22e($s0)
    v0 = *(uint16_t*)((s0) + 0x230);                            // 0x0010227c: lhu $v0, 0x230($s0)
    v0 = *(uint16_t*)((s0) + 0x232);                            // 0x00102284: lhu $v0, 0x232($s0)
    v0 = *(uint16_t*)((s0) + 0x234);                            // 0x0010228c: lhu $v0, 0x234($s0)
    v0 = *(uint16_t*)((s0) + 0x236);                            // 0x00102294: lhu $v0, 0x236($s0)
    v0 = 1;                                                     // 0x0010229c: addiu $v0, $zero, 1
label_0x1022a0:
    return;                                                     // 0x001022ac: jr $ra
    sp = sp + 0x30;                                             // 0x001022b0: addiu $sp, $sp, 0x30
}