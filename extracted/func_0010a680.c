void func_0010a680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010a680: addiu $sp, $sp, -0x20
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a6a0: lhu $v0, 0xc($s0)
    v0 = v0 & 0x100;                                            // 0x0010a6a4: andi $v0, $v0, 0x100
    if (v0 == 0) goto label_0x10a6c0;                           // 0x0010a6a8: beqz $v0, 0x10a6c0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a6b0: lw $a0, 0x54($s0)
    a3 = 2;                                                     // 0x0010a6b4: addiu $a3, $zero, 2
    func_00106b60();  // 0x106b00                                // 0x0010a6b8: jal 0x106b00
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x0010a6bc: lh $a1, 0xe($s0)
label_0x10a6c0:
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a6c0: lhu $v0, 0xc($s0)
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x0010a6c8: lh $a1, 0xe($s0)
    v0 = v0 & 0xefff;                                           // 0x0010a6d0: andi $v0, $v0, 0xefff
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a6d4: lw $a0, 0x54($s0)
    func_0010f638();  // 0x10f5d8                                // 0x0010a6d8: jal 0x10f5d8
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010a6dc: sh $v0, 0xc($s0)
    return;                                                     // 0x0010a6f8: jr $ra
    sp = sp + 0x20;                                             // 0x0010a6fc: addiu $sp, $sp, 0x20
}