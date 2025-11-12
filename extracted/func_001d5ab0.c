void func_001d5ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d5ab0: addiu $sp, $sp, -0x20
    v1 = *(uint8_t*)(a0);                                       // 0x001d5abc: lbu $v1, 0($a0)
    v1 = v1 + -1;                                               // 0x001d5ac0: addiu $v1, $v1, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d5ac4: sb $v1, 0($a0)
    v1 = v1 & 0xff;                                             // 0x001d5ac8: andi $v1, $v1, 0xff
    if (v1 != 0) goto label_0x1d5ae4;                           // 0x001d5acc: bnez $v1, 0x1d5ae4
    func_001b12b0();  // 0x1b11d0                                // 0x001d5ad4: jal 0x1b11d0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001d5ad8: lw $a0, 4($s0)
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x001d5adc: sb $zero, 3($s0)
    *(uint8_t*)((s0) + 8) = 0;                                  // 0x001d5ae0: sb $zero, 8($s0)
label_0x1d5ae4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5ae8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5aec: jr $ra
    sp = sp + 0x20;                                             // 0x001d5af0: addiu $sp, $sp, 0x20
}