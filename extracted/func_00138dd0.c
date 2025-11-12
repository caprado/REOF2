void func_00138dd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138dd0: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x00138dd4: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x00138de8: sb $zero, 2($s0)
    v0 = *(int8_t*)((s0) + 1);                                  // 0x00138dec: lb $v0, 1($s0)
    if (v0 != v1) goto label_0x138e0c;                          // 0x00138df0: bne $v0, $v1, 0x138e0c
    s1 = 1;                                                     // 0x00138df4: addiu $s1, $zero, 1
label_0x138df8:
    func_00139288();  // 0x139228                                // 0x00138df8: jal 0x139228
    /* nop */                                                   // 0x00138dfc: nop 
    v0 = *(int8_t*)((s0) + 1);                                  // 0x00138e00: lb $v0, 1($s0)
    if (v0 == s1) goto label_0x138df8;                          // 0x00138e04: beq $v0, $s1, 0x138df8
    /* nop */                                                   // 0x00138e08: nop 
label_0x138e0c:
    func_00138b80();  // 0x138b18                                // 0x00138e0c: jal 0x138b18
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00138e10: lw $a0, 4($s0)
    a2 = 0x44;                                                  // 0x00138e24: addiu $a2, $zero, 0x44
    return func_00107d30();  // Tail call                        // 0x00138e2c: j 0x107c70
    sp = sp + 0x20;                                             // 0x00138e30: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00138e34: nop 
    *(uint32_t*)((a0) + 0x24) = a2;                             // 0x00138e38: sw $a2, 0x24($a0)
    return;                                                     // 0x00138e3c: jr $ra
    *(uint32_t*)((a0) + 0x20) = a1;                             // 0x00138e40: sw $a1, 0x20($a0)
}