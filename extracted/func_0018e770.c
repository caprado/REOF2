void func_0018e770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018e770: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018e774: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018e778: sw $zero, 0($a1)
    t0 = v1 + v0;                                               // 0x0018e77c: addu $t0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018e780: sw $zero, 0($a2)
    FPU_F0 = *(float*)((t0) + 4);  // Load float                // 0x0018e784: lwc1 $f0, 4($t0)
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018e788: c.ole.s $f12, $f0
    /* bc1t 0x18e7a4 */                                         // 0x0018e78c: bc1t 0x18e7a4
    /* nop */                                                   // 0x0018e790: nop 
    v1 = *(uint16_t*)((a0) + 2);                                // 0x0018e794: lhu $v1, 2($a0)
    v0 = 1;                                                     // 0x0018e798: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x18e7b4;                          // 0x0018e79c: bne $v1, $v0, 0x18e7b4
    v0 = v1 << 3;                                               // 0x0018e7a0: sll $v0, $v1, 3
    *(uint32_t*)(a1) = t0;                                      // 0x0018e7a4: sw $t0, 0($a1)
    goto label_0x18e8b0;                                        // 0x0018e7ac: b 0x18e8b0
    *(uint32_t*)(a2) = 0;                                       // 0x0018e7b0: sw $zero, 0($a2)
label_0x18e7b4:
    v0 = v0 + t0;                                               // 0x0018e7b4: addu $v0, $v0, $t0
    FPU_F0 = *(float*)((v0) + -4);  // Load float               // 0x0018e7b8: lwc1 $f0, -4($v0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018e7bc: c.olt.s $f12, $f0
    /* bc1t 0x18e7f0 */                                         // 0x0018e7c0: bc1t 0x18e7f0
    /* nop */                                                   // 0x0018e7c4: nop 
    v0 = v1 + -1;                                               // 0x0018e7c8: addiu $v0, $v1, -1
    v0 = v0 << 3;                                               // 0x0018e7cc: sll $v0, $v0, 3
    v0 = t0 + v0;                                               // 0x0018e7d0: addu $v0, $t0, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0018e7d4: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018e7d8: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018e7dc: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018e7e0: addiu $v0, $v0, -1
    goto label_0x18e8b0;                                        // 0x0018e7e8: b 0x18e8b0
    if (v0 >= 0) goto label_0x18e808;                           // 0x0018e7f8: bgez $v0, 0x18e808
    /* nop */                                                   // 0x0018e7fc: nop 
    goto label_0x18e820;                                        // 0x0018e800: b 0x18e820
label_0x18e808:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018e808: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x18e820;                           // 0x0018e80c: bnez $v0, 0x18e820
    /* nop */                                                   // 0x0018e810: nop 
    v0 = v1 + -1;                                               // 0x0018e814: addiu $v0, $v1, -1
label_0x18e820:
    v0 = v0 << 3;                                               // 0x0018e828: sll $v0, $v0, 3
    t0 = t0 + v0;                                               // 0x0018e82c: addu $t0, $t0, $v0
label_0x18e830:
    FPU_F1 = *(float*)((t0) + 4);  // Load float                // 0x0018e830: lwc1 $f1, 4($t0)
    /* FPU: c.eq.s $f1, $f12 */                                 // 0x0018e834: c.eq.s $f1, $f12
    /* bc1f 0x18e850 */                                         // 0x0018e838: bc1f 0x18e850
    /* nop */                                                   // 0x0018e83c: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018e840: sw $t0, 0($a1)
    goto label_0x18e8b0;                                        // 0x0018e848: b 0x18e8b0
    *(uint32_t*)(a2) = 0;                                       // 0x0018e84c: sw $zero, 0($a2)
    /* FPU: c.olt.s $f1, $f12 */                                // 0x0018e850: c.olt.s $f1, $f12
    /* bc1f 0x18e880 */                                         // 0x0018e854: bc1f 0x18e880
    /* nop */                                                   // 0x0018e858: nop 
    FPU_F0 = *(float*)((t0) + 0xc);  // Load float              // 0x0018e85c: lwc1 $f0, 0xc($t0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018e860: c.olt.s $f12, $f0
    /* bc1f 0x18e880 */                                         // 0x0018e864: bc1f 0x18e880
    /* nop */                                                   // 0x0018e868: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018e86c: sw $t0, 0($a1)
    v0 = t0 + 8;                                                // 0x0018e870: addiu $v0, $t0, 8
    *(uint32_t*)(a2) = v0;                                      // 0x0018e874: sw $v0, 0($a2)
    goto label_0x18e8b0;                                        // 0x0018e878: b 0x18e8b0
    /* FPU: c.olt.s $f12, $f1 */                                // 0x0018e880: c.olt.s $f12, $f1
    /* bc1f 0x18e8a0 */                                         // 0x0018e884: bc1f 0x18e8a0
    v0 = a3 + 1;                                                // 0x0018e888: addiu $v0, $a3, 1
    v0 = a3 + -1;                                               // 0x0018e88c: addiu $v0, $a3, -1
    t0 = t0 + -8;                                               // 0x0018e890: addiu $t0, $t0, -8
    goto label_0x18e830;                                        // 0x0018e898: b 0x18e830
    t0 = t0 + 8;                                                // 0x0018e8a0: addiu $t0, $t0, 8
    goto label_0x18e830;                                        // 0x0018e8a8: b 0x18e830
label_0x18e8b0:
    return;                                                     // 0x0018e8b0: jr $ra
    /* nop */                                                   // 0x0018e8b4: nop 
}