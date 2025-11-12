void func_001b2560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = -2;                                                    // 0x001b2560: addiu $v1, $zero, -2
label_0x1b2564:
    a3 = *(int32_t*)(a1);                                       // 0x001b2564: lw $a3, 0($a1)
    if (a3 == 0) goto label_0x1b2578;                           // 0x001b2568: beqz $a3, 0x1b2578
    a2 = a3 & 1;                                                // 0x001b256c: andi $a2, $a3, 1
    if (a2 != 0) goto label_0x1b2588;                           // 0x001b2570: bnez $a2, 0x1b2588
    /* nop */                                                   // 0x001b2574: nop 
label_0x1b2578:
    v1 = a0 | 1;                                                // 0x001b2578: ori $v1, $a0, 1
    *(uint32_t*)(a1) = v1;                                      // 0x001b257c: sw $v1, 0($a1)
    goto label_0x1b25b8;                                        // 0x001b2580: b 0x1b25b8
    *(uint32_t*)(a0) = a3;                                      // 0x001b2584: sw $a3, 0($a0)
label_0x1b2588:
    a2 = a3 & v1;                                               // 0x001b2588: and $a2, $a3, $v1
    FPU_F0 = *(float*)((a0) + 0x10);  // Load float             // 0x001b258c: lwc1 $f0, 0x10($a0)
    FPU_F1 = *(float*)((a2) + 0x10);  // Load float             // 0x001b2590: lwc1 $f1, 0x10($a2)
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001b2594: c.ole.s $f1, $f0
    /* bc1f 0x1b25b0 */                                         // 0x001b2598: bc1f 0x1b25b0
    /* nop */                                                   // 0x001b259c: nop 
    v1 = a0 | 1;                                                // 0x001b25a0: ori $v1, $a0, 1
    *(uint32_t*)(a1) = v1;                                      // 0x001b25a4: sw $v1, 0($a1)
    goto label_0x1b25b8;                                        // 0x001b25a8: b 0x1b25b8
    *(uint32_t*)(a0) = a3;                                      // 0x001b25ac: sw $a3, 0($a0)
    goto label_0x1b2564;                                        // 0x001b25b0: b 0x1b2564
label_0x1b25b8:
    return;                                                     // 0x001b25b8: jr $ra
    /* nop */                                                   // 0x001b25bc: nop 
}