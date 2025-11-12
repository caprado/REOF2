void func_00101fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00101fe0: addiu $sp, $sp, -0x30
    func_00101e38();  // 0x101e20                                // 0x00101ff4: jal 0x101e20
    if (v0 != 0) goto label_0x102138;                           // 0x00101ffc: bnez $v0, 0x102138
    *(vec128_t*)((s1) + 0) = VPU_VF0;  // Store 128-bit vector  // 0x00102004: sdc2 $0, 0($s1)
    *(vec128_t*)((s1) + 0x10) = VPU_VF1;  // Store 128-bit vector // 0x00102008: sdc2 $1, 0x10($s1)
    *(vec128_t*)((s1) + 0x20) = VPU_VF2;  // Store 128-bit vector // 0x0010200c: sdc2 $2, 0x20($s1)
    *(vec128_t*)((s1) + 0x30) = VPU_VF3;  // Store 128-bit vector // 0x00102010: sdc2 $3, 0x30($s1)
    *(vec128_t*)((s1) + 0x40) = VPU_VF4;  // Store 128-bit vector // 0x00102014: sdc2 $4, 0x40($s1)
    *(vec128_t*)((s1) + 0x50) = VPU_VF5;  // Store 128-bit vector // 0x00102018: sdc2 $5, 0x50($s1)
    *(vec128_t*)((s1) + 0x60) = VPU_VF6;  // Store 128-bit vector // 0x0010201c: sdc2 $6, 0x60($s1)
    *(vec128_t*)((s1) + 0x70) = VPU_VF7;  // Store 128-bit vector // 0x00102020: sdc2 $7, 0x70($s1)
    *(vec128_t*)((s1) + 0x80) = VPU_VF8;  // Store 128-bit vector // 0x00102024: sdc2 $8, 0x80($s1)
    *(vec128_t*)((s1) + 0x90) = VPU_VF9;  // Store 128-bit vector // 0x00102028: sdc2 $9, 0x90($s1)
    *(vec128_t*)((s1) + 0xa0) = VPU_VF10;  // Store 128-bit vector // 0x0010202c: sdc2 $10, 0xa0($s1)
    *(vec128_t*)((s1) + 0xb0) = VPU_VF11;  // Store 128-bit vector // 0x00102030: sdc2 $11, 0xb0($s1)
    *(vec128_t*)((s1) + 0xc0) = VPU_VF12;  // Store 128-bit vector // 0x00102034: sdc2 $12, 0xc0($s1)
    *(vec128_t*)((s1) + 0xd0) = VPU_VF13;  // Store 128-bit vector // 0x00102038: sdc2 $13, 0xd0($s1)
    *(vec128_t*)((s1) + 0xe0) = VPU_VF14;  // Store 128-bit vector // 0x0010203c: sdc2 $14, 0xe0($s1)
    *(vec128_t*)((s1) + 0xf0) = VPU_VF15;  // Store 128-bit vector // 0x00102040: sdc2 $15, 0xf0($s1)
    *(vec128_t*)((s1) + 0x100) = VPU_VF16;  // Store 128-bit vector // 0x00102044: sdc2 $16, 0x100($s1)
    *(vec128_t*)((s1) + 0x110) = VPU_VF17;  // Store 128-bit vector // 0x00102048: sdc2 $17, 0x110($s1)
    *(vec128_t*)((s1) + 0x120) = VPU_VF18;  // Store 128-bit vector // 0x0010204c: sdc2 $18, 0x120($s1)
    *(vec128_t*)((s1) + 0x130) = VPU_VF19;  // Store 128-bit vector // 0x00102050: sdc2 $19, 0x130($s1)
    *(vec128_t*)((s1) + 0x140) = VPU_VF20;  // Store 128-bit vector // 0x00102054: sdc2 $20, 0x140($s1)
    *(vec128_t*)((s1) + 0x150) = VPU_VF21;  // Store 128-bit vector // 0x00102058: sdc2 $21, 0x150($s1)
    *(vec128_t*)((s1) + 0x160) = VPU_VF22;  // Store 128-bit vector // 0x0010205c: sdc2 $22, 0x160($s1)
    *(vec128_t*)((s1) + 0x170) = VPU_VF23;  // Store 128-bit vector // 0x00102060: sdc2 $23, 0x170($s1)
    *(vec128_t*)((s1) + 0x180) = VPU_VF24;  // Store 128-bit vector // 0x00102064: sdc2 $24, 0x180($s1)
    *(vec128_t*)((s1) + 0x190) = VPU_VF25;  // Store 128-bit vector // 0x00102068: sdc2 $25, 0x190($s1)
    *(vec128_t*)((s1) + 0x1a0) = VPU_VF26;  // Store 128-bit vector // 0x0010206c: sdc2 $26, 0x1a0($s1)
    *(vec128_t*)((s1) + 0x1b0) = VPU_VF27;  // Store 128-bit vector // 0x00102070: sdc2 $27, 0x1b0($s1)
    *(vec128_t*)((s1) + 0x1c0) = VPU_VF28;  // Store 128-bit vector // 0x00102074: sdc2 $28, 0x1c0($s1)
    *(vec128_t*)((s1) + 0x1d0) = VPU_VF29;  // Store 128-bit vector // 0x00102078: sdc2 $29, 0x1d0($s1)
    *(vec128_t*)((s1) + 0x1e0) = VPU_VF30;  // Store 128-bit vector // 0x0010207c: sdc2 $30, 0x1e0($s1)
    *(vec128_t*)((s1) + 0x1f0) = VPU_VF31;  // Store 128-bit vector // 0x00102080: sdc2 $31, 0x1f0($s1)
    *(uint32_t*)((s0) + 0x200) = v0;                            // 0x00102088: sw $v0, 0x200($s0)
    *(uint32_t*)((s0) + 0x204) = v0;                            // 0x00102090: sw $v0, 0x204($s0)
    *(uint32_t*)((s0) + 0x208) = v0;                            // 0x00102098: sw $v0, 0x208($s0)
    *(uint32_t*)((s0) + 0x20c) = v0;                            // 0x001020a0: sw $v0, 0x20c($s0)
    *(uint32_t*)((s0) + 0x210) = v0;                            // 0x001020a8: sw $v0, 0x210($s0)
    *(uint32_t*)((s0) + 0x214) = v0;                            // 0x001020b0: sw $v0, 0x214($s0)
    *(uint16_t*)((s0) + 0x218) = v0;                            // 0x001020b8: sh $v0, 0x218($s0)
    *(uint16_t*)((s0) + 0x21a) = v0;                            // 0x001020c0: sh $v0, 0x21a($s0)
    *(uint16_t*)((s0) + 0x21c) = v0;                            // 0x001020c8: sh $v0, 0x21c($s0)
    *(uint16_t*)((s0) + 0x21e) = v0;                            // 0x001020d0: sh $v0, 0x21e($s0)
    *(uint16_t*)((s0) + 0x220) = v0;                            // 0x001020d8: sh $v0, 0x220($s0)
    *(uint16_t*)((s0) + 0x222) = v0;                            // 0x001020e0: sh $v0, 0x222($s0)
    *(uint16_t*)((s0) + 0x224) = v0;                            // 0x001020e8: sh $v0, 0x224($s0)
    *(uint16_t*)((s0) + 0x226) = v0;                            // 0x001020f0: sh $v0, 0x226($s0)
    *(uint16_t*)((s0) + 0x228) = v0;                            // 0x001020f8: sh $v0, 0x228($s0)
    *(uint16_t*)((s0) + 0x22a) = v0;                            // 0x00102100: sh $v0, 0x22a($s0)
    *(uint16_t*)((s0) + 0x22c) = v0;                            // 0x00102108: sh $v0, 0x22c($s0)
    *(uint16_t*)((s0) + 0x22e) = v0;                            // 0x00102110: sh $v0, 0x22e($s0)
    *(uint16_t*)((s0) + 0x230) = v0;                            // 0x00102118: sh $v0, 0x230($s0)
    *(uint16_t*)((s0) + 0x232) = v0;                            // 0x00102120: sh $v0, 0x232($s0)
    *(uint16_t*)((s0) + 0x234) = v0;                            // 0x00102128: sh $v0, 0x234($s0)
    *(uint16_t*)((s0) + 0x236) = v0;                            // 0x00102130: sh $v0, 0x236($s0)
    v0 = 1;                                                     // 0x00102134: addiu $v0, $zero, 1
label_0x102138:
    return;                                                     // 0x00102144: jr $ra
    sp = sp + 0x30;                                             // 0x00102148: addiu $sp, $sp, 0x30
}