void func_0010a700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010a700: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a718: lw $a0, 0x54($s0)
    func_00106b00();  // 106b00                                // 0x0010a71c: jal 0x106b00
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x0010a720: lh $a1, 0xe($s0)
    a0 = -1;                                                    // 0x0010a724: addiu $a0, $zero, -1
    if (v1 != a0) goto label_0x10a748;                          // 0x0010a734: bne $v1, $a0, 0x10a748
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a738: lhu $v1, 0xc($s0)
    goto label_0x10a750;                                        // 0x0010a73c: b 0x10a750
    v1 = v1 & 0xefff;                                           // 0x0010a740: andi $v1, $v1, 0xefff
    /* nop */                                                   // 0x0010a744: nop 
label_0x10a748:
    *(uint32_t*)((s0) + 0x50) = a1;                             // 0x0010a748: sw $a1, 0x50($s0)
    v1 = v1 | 0x1000;                                           // 0x0010a74c: ori $v1, $v1, 0x1000
label_0x10a750:
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x0010a750: sh $v1, 0xc($s0)
    return;                                                     // 0x0010a75c: jr $ra
    sp = sp + 0x10;                                             // 0x0010a760: addiu $sp, $sp, 0x10
}