void func_00167bc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00167bc8: addiu $sp, $sp, -0x40
    s0 = s1 + 0xcc0;                                            // 0x00167bd8: addiu $s0, $s1, 0xcc0
    func_00169ba0();  // 0x169b88                                // 0x00167bf8: jal 0x169b88
    a3 = *(int32_t*)((s0) + 0x1b0);                             // 0x00167c00: lw $a3, 0x1b0($s0)
    v1 = *(int32_t*)((s0) + 0x1b4);                             // 0x00167c04: lw $v1, 0x1b4($s0)
    a2 = a3 + 0x1f;                                             // 0x00167c0c: addiu $a2, $a3, 0x1f
    a1 = (a3 < 0) ? 1 : 0;                                      // 0x00167c10: slti $a1, $a3, 0
    v1 = a3 - v1;                                               // 0x00167c18: subu $v1, $a3, $v1
    if (a1 != 0) v0 = a2;                                       // 0x00167c1c: movn $v0, $a2, $a1
    v1 = (v1 < 0x20) ? 1 : 0;                                   // 0x00167c20: slti $v1, $v1, 0x20
    if (v1 == 0) goto label_0x167c54;                           // 0x00167c24: beqz $v1, 0x167c54
    v0 = v0 >> 5;                                               // 0x00167c28: sra $v0, $v0, 5
    v0 = v0 << 5;                                               // 0x00167c2c: sll $v0, $v0, 5
    *(uint32_t*)((s0) + 0x1a8) = s2;                            // 0x00167c30: sw $s2, 0x1a8($s0)
    v0 = a3 - v0;                                               // 0x00167c34: subu $v0, $a3, $v0
    s4 = 1;                                                     // 0x00167c38: addiu $s4, $zero, 1
    v0 = v0 << 2;                                               // 0x00167c3c: sll $v0, $v0, 2
    v0 = v0 + s1;                                               // 0x00167c40: addu $v0, $v0, $s1
    *(uint32_t*)((v0) + 0xe78) = s3;                            // 0x00167c44: sw $s3, 0xe78($v0)
    v1 = *(int32_t*)((s0) + 0x1b0);                             // 0x00167c48: lw $v1, 0x1b0($s0)
    v1 = v1 + 1;                                                // 0x00167c4c: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0x1b0) = v1;                            // 0x00167c50: sw $v1, 0x1b0($s0)
label_0x167c54:
    func_00169bc8();  // 0x169ba0                                // 0x00167c54: jal 0x169ba0
    /* nop */                                                   // 0x00167c58: nop 
    return;                                                     // 0x00167c78: jr $ra
    sp = sp + 0x40;                                             // 0x00167c7c: addiu $sp, $sp, 0x40
}