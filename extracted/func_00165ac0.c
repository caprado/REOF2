void func_00165ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x50;                                            // 0x00165ac0: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x00165ad4: addiu $v0, $zero, 1
    s3 = *(int32_t*)((s4) + 0x1b74);                            // 0x00165ae8: lw $s3, 0x1b74($s4)
    if (v1 == v0) goto label_0x165b14;                          // 0x00165aec: beq $v1, $v0, 0x165b14
    s2 = *(int32_t*)(s3);                                       // 0x00165af0: lw $s2, 0($s3)
    /* beqzl $v1, 0x165b10 */                                   // 0x00165af4: beqzl $v1, 0x165b10
    *(uint32_t*)((s3) + 0x30) = 0;                              // 0x00165af8: sw $zero, 0x30($s3)
    v0 = 2;                                                     // 0x00165afc: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x165b28;                          // 0x00165b00: beq $v1, $v0, 0x165b28
    goto label_0x165b94;                                        // 0x00165b08: b 0x165b94
label_0x165b14:
    func_00165c00();  // 165c00                                // 0x00165b14: jal 0x165c00
    /* nop */                                                   // 0x00165b18: nop 
    goto label_0x165b90;                                        // 0x00165b1c: b 0x165b90
    /* nop */                                                   // 0x00165b24: nop 
label_0x165b28:
    func_001653a8();  // 1653a8                                // 0x00165b28: jal 0x1653a8
    if (v0 == 0) goto label_0x165b90;                           // 0x00165b30: beqz $v0, 0x165b90
    func_001321b8();  // 1321b8                                // 0x00165b38: jal 0x1321b8
    a1 = sp + 0x10;                                             // 0x00165b48: addiu $a1, $sp, 0x10
    func_00165c88();  // 165c88                                // 0x00165b4c: jal 0x165c88
    v0 = *(int32_t*)((s3) + 0x30);                              // 0x00165b54: lw $v0, 0x30($s3)
    s0 = local_10;                                              // 0x00165b58: lw $s0, 0x10($sp)
    s0 = s0 + v0;                                               // 0x00165b60: addu $s0, $s0, $v0
    func_00132d18();  // 132d18                                // 0x00165b64: jal 0x132d18
    a0 = s4 + 0xf60;                                            // 0x00165b6c: addiu $a0, $s4, 0xf60
    s0 = s0 - v0;                                               // 0x00165b70: subu $s0, $s0, $v0
    v0 = local_10;                                              // 0x00165b74: lw $v0, 0x10($sp)
    *(uint32_t*)((s3) + 0x30) = s0;                             // 0x00165b78: sw $s0, 0x30($s3)
    func_00177b18();  // 177b18                                // 0x00165b84: jal 0x177b18
label_0x165b90:
label_0x165b94:
    return;                                                     // 0x00165ba8: jr $ra
    sp = sp + 0x50;                                             // 0x00165bac: addiu $sp, $sp, 0x50
}