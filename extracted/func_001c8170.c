void func_001c8170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c8170: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8178: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8180: jal 0x1c7770
    a0 = 0x25;                                                  // 0x001c8188: addiu $a0, $zero, 0x25
    a1 = 0x20;                                                  // 0x001c818c: addiu $a1, $zero, 0x20
    func_001c7670();  // 0x1c75b0                                // 0x001c8190: jal 0x1c75b0
    a2 = 0x4c;                                                  // 0x001c8194: addiu $a2, $zero, 0x4c
    if (s0 >= 0) goto label_0x1c81b8;                           // 0x001c81a0: bgez $s0, 0x1c81b8
    /* nop */                                                   // 0x001c81a4: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c81a8: jal 0x1c7780
    /* nop */                                                   // 0x001c81ac: nop 
    goto label_0x1c8220;                                        // 0x001c81b0: b 0x1c8220
label_0x1c81b8:
    v0 = 0x31 << 16;                                            // 0x001c81b8: lui $v0, 0x31
    v0 = v0 + 0x669c;                                           // 0x001c81bc: addiu $v0, $v0, 0x669c
    FPU_F3 = *(float*)(v0);  // Load float                      // 0x001c81c0: lwc1 $f3, 0($v0)
    FPU_F2 = *(float*)((v0) + 4);  // Load float                // 0x001c81c4: lwc1 $f2, 4($v0)
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001c81c8: lwc1 $f1, 8($v0)
    FPU_F0 = *(float*)((v0) + 0xc);  // Load float              // 0x001c81cc: lwc1 $f0, 0xc($v0)
    *(float*)(s1) = FPU_F3;  // Store float                     // 0x001c81d0: swc1 $f3, 0($s1)
    *(float*)((s1) + 4) = FPU_F2;  // Store float               // 0x001c81d4: swc1 $f2, 4($s1)
    *(float*)((s1) + 8) = FPU_F1;  // Store float               // 0x001c81d8: swc1 $f1, 8($s1)
    *(float*)((s1) + 0xc) = FPU_F0;  // Store float             // 0x001c81dc: swc1 $f0, 0xc($s1)
    FPU_F3 = *(float*)((v0) + 0x10);  // Load float             // 0x001c81e0: lwc1 $f3, 0x10($v0)
    FPU_F2 = *(float*)((v0) + 0x14);  // Load float             // 0x001c81e4: lwc1 $f2, 0x14($v0)
    FPU_F1 = *(float*)((v0) + 0x18);  // Load float             // 0x001c81e8: lwc1 $f1, 0x18($v0)
    FPU_F0 = *(float*)((v0) + 0x1c);  // Load float             // 0x001c81ec: lwc1 $f0, 0x1c($v0)
    *(float*)((s1) + 0x10) = FPU_F3;  // Store float            // 0x001c81f0: swc1 $f3, 0x10($s1)
    *(float*)((s1) + 0x14) = FPU_F2;  // Store float            // 0x001c81f4: swc1 $f2, 0x14($s1)
    *(float*)((s1) + 0x18) = FPU_F1;  // Store float            // 0x001c81f8: swc1 $f1, 0x18($s1)
    *(float*)((s1) + 0x1c) = FPU_F0;  // Store float            // 0x001c81fc: swc1 $f0, 0x1c($s1)
    FPU_F2 = *(float*)((v0) + 0x20);  // Load float             // 0x001c8200: lwc1 $f2, 0x20($v0)
    FPU_F1 = *(float*)((v0) + 0x24);  // Load float             // 0x001c8204: lwc1 $f1, 0x24($v0)
    FPU_F0 = *(float*)((v0) + 0x28);  // Load float             // 0x001c8208: lwc1 $f0, 0x28($v0)
    *(float*)((s1) + 0x20) = FPU_F2;  // Store float            // 0x001c820c: swc1 $f2, 0x20($s1)
    *(float*)((s1) + 0x24) = FPU_F1;  // Store float            // 0x001c8210: swc1 $f1, 0x24($s1)
    func_001c7790();  // 0x1c7780                                // 0x001c8214: jal 0x1c7780
    *(float*)((s1) + 0x28) = FPU_F0;  // Store float            // 0x001c8218: swc1 $f0, 0x28($s1)
label_0x1c8220:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8224: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8228: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c822c: jr $ra
    sp = sp + 0x30;                                             // 0x001c8230: addiu $sp, $sp, 0x30
}