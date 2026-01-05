void func_001a2310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2310: addiu $sp, $sp, -0x30
    v0 = 0x23;                                                  // 0x001a2314: addiu $v0, $zero, 0x23
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2320: addu.qb $zero, $sp, $s1
    *(uint8_t*)(a1) = v0;                                       // 0x001a232c: sb $v0, 0($a1)
    s0 = a0 + 0xc;                                              // 0x001a2330: addiu $s0, $a0, 0xc
    *(uint8_t*)((a1) + 1) = 0;                                  // 0x001a2334: sb $zero, 1($a1)
    v0 = g_002a0505;  // Global at 0x002a0505                   // 0x001a2338: lw $v0, 4($a0)
    *(uint16_t*)((a1) + 2) = v0;                                // 0x001a233c: sh $v0, 2($a1)
    a0 = 0x2a << 16;                                            // 0x001a2340: lui $a0, 0x2a
    v1 = *(uint16_t*)((a1) + 2);                                // 0x001a2344: lhu $v1, 2($a1)
    a0 = a0 + 0x500;                                            // 0x001a2348: addiu $a0, $a0, 0x500
    v0 = v1 << 2;                                               // 0x001a234c: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x001a2350: addu $v0, $v0, $v1
    func_001898e0();  // 1898e0                                // 0x001a2354: jal 0x1898e0
    a1 = v0 << 2;                                               // 0x001a2358: sll $a1, $v0, 2
    goto label_0x1a23a0;                                        // 0x001a2364: b 0x1a23a0
    *(uint32_t*)((s1) + 4) = a1;                                // 0x001a2368: sw $a1, 4($s1)
label_0x1a236c:
    v1 = g_002a050d;  // Global at 0x002a050d                   // 0x001a236c: lw $v1, 0($s0)
    a0 = a0 + 1;                                                // 0x001a2370: addiu $a0, $a0, 1
    *(uint32_t*)(a1) = v1;                                      // 0x001a2374: sw $v1, 0($a1)
    FPU_F0 = *(float*)((s0) + 4);  // Load float                // 0x001a2378: lwc1 $f0, 4($s0)
    *(float*)((a1) + 4) = FPU_F0;  // Store float               // 0x001a237c: swc1 $f0, 4($a1)
    FPU_F0 = *(float*)((s0) + 8);  // Load float                // 0x001a2380: lwc1 $f0, 8($s0)
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001a2384: swc1 $f0, 8($a1)
    FPU_F0 = *(float*)((s0) + 0xc);  // Load float              // 0x001a2388: lwc1 $f0, 0xc($s0)
    *(float*)((a1) + 0xc) = FPU_F0;  // Store float             // 0x001a238c: swc1 $f0, 0xc($a1)
    FPU_F0 = *(float*)((s0) + 0x10);  // Load float             // 0x001a2390: lwc1 $f0, 0x10($s0)
    *(float*)((a1) + 0x10) = FPU_F0;  // Store float            // 0x001a2394: swc1 $f0, 0x10($a1)
    s0 = s0 + 0x14;                                             // 0x001a2398: addiu $s0, $s0, 0x14
    a1 = a1 + 0x14;                                             // 0x001a239c: addiu $a1, $a1, 0x14
label_0x1a23a0:
    v1 = *(uint16_t*)((s1) + 2);                                // 0x001a23a0: lhu $v1, 2($s1)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001a23a4: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1a236c;                           // 0x001a23a8: bnez $v1, 0x1a236c
    /* nop */                                                   // 0x001a23ac: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a23b0: lw $a0, 4($s1)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a23b4: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a23b8: subu $v1, $a0, $v1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001a23bc: sw $v1, 4($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a23c4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a23c8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a23cc: jr $ra
    sp = sp + 0x30;                                             // 0x001a23d0: addiu $sp, $sp, 0x30
}