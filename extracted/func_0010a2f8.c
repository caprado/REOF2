void func_0010a2f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    /* move from FPU: $a2, $f12 */                              // 0x0010a2f8: mfc1 $a2, $f12
    v0 = a2 >> 0x17;                                            // 0x0010a2fc: sra $v0, $a2, 0x17
    v0 = v0 & 0xff;                                             // 0x0010a300: andi $v0, $v0, 0xff
    a1 = v0 + -0x7f;                                            // 0x0010a304: addiu $a1, $v0, -0x7f
    v1 = (a1 < 0x17) ? 1 : 0;                                   // 0x0010a308: slti $v1, $a1, 0x17
    if (v1 == 0) goto label_0x10a368;                           // 0x0010a30c: beqz $v1, 0x10a368
    sp = sp + -0x10;                                            // 0x0010a310: addiu $sp, $sp, -0x10
    if (a1 >= 0) goto label_0x10a338;                           // 0x0010a314: bgez $a1, 0x10a338
    v0 = 0x7f << 16;                                            // 0x0010a318: lui $v0, 0x7f
    v0 = 0x8000 << 16;                                          // 0x0010a31c: lui $v0, 0x8000
    a2 = a2 & v0;                                               // 0x0010a320: and $a2, $a2, $v0
    local_0 = a2;                                               // 0x0010a324: sw $a2, 0($sp)
    FPU_F0 = *(float*)(sp);  // Load float                      // 0x0010a328: lwc1 $f0, 0($sp)
    goto label_0x10a378;                                        // 0x0010a32c: b 0x10a378
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x0010a330: swc1 $f0, 0($a0)
    /* nop */                                                   // 0x0010a334: nop 
label_0x10a338:
    v0 = v0 | 0xffff;                                           // 0x0010a338: ori $v0, $v0, 0xffff
    v0 = v0 >> a1;                                              // 0x0010a33c: srav $v0, $v0, $a1
    v1 = ~(0 | v0);                                             // 0x0010a340: nor $v1, $zero, $v0
    v0 = a2 & v0;                                               // 0x0010a344: and $v0, $a2, $v0
    v1 = a2 & v1;                                               // 0x0010a348: and $v1, $a2, $v1
    if (v0 == 0) goto label_0x10a368;                           // 0x0010a34c: beqz $v0, 0x10a368
    local_4 = v1;                                               // 0x0010a350: sw $v1, 4($sp)
    FPU_F0 = *(float*)((sp) + 4);  // Load float                // 0x0010a354: lwc1 $f0, 4($sp)
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x0010a358: swc1 $f0, 0($a0)
    goto label_0x10a37c;                                        // 0x0010a35c: b 0x10a37c
    /* FPU: sub.s $f0, $f12, $f0 */                             // 0x0010a360: sub.s $f0, $f12, $f0
    /* nop */                                                   // 0x0010a364: nop 
label_0x10a368:
    *(float*)(a0) = FPU_F12;  // Store float                    // 0x0010a368: swc1 $f12, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0010a36c: lui $v0, 0x8000
    a2 = a2 & v0;                                               // 0x0010a370: and $a2, $a2, $v0
    /* move to FPU: $a2, $f12 */                                // 0x0010a374: mtc1 $a2, $f12
label_0x10a378:
    /* FPU: mov.s $f0, $f12 */                                  // 0x0010a378: mov.s $f0, $f12
label_0x10a37c:
    return;                                                     // 0x0010a37c: jr $ra
    sp = sp + 0x10;                                             // 0x0010a380: addiu $sp, $sp, 0x10
}