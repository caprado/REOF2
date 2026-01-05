void func_00164c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00164c00: addiu $sp, $sp, -0x40
    s4 = 1;                                                     // 0x00164c28: addiu $s4, $zero, 1
    goto label_0x164c3c;                                        // 0x00164c30: b 0x164c3c
    *(uint32_t*)(s3) = 0;                                       // 0x00164c34: sw $zero, 0($s3)
label_0x164c38:
    s1 = s1 + 0x12;                                             // 0x00164c38: addiu $s1, $s1, 0x12
label_0x164c3c:
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x00164c3c: slt $v0, $s1, $s2
    /* beqzl $v0, 0x164c68 */                                   // 0x00164c40: beqzl $v0, 0x164c68
    s0 = s0 + 0x12;                                             // 0x00164c4c: addiu $s0, $s0, 0x12
    a1 = 0x12;                                                  // 0x00164c50: addiu $a1, $zero, 0x12
    func_00132f00();  // 132f00                                // 0x00164c54: jal 0x132f00
    if (v0 == 0) goto label_0x164c38;                           // 0x00164c5c: beqz $v0, 0x164c38
    *(uint32_t*)(s3) = s4;                                      // 0x00164c64: sw $s4, 0($s3)
    return;                                                     // 0x00164c80: jr $ra
    sp = sp + 0x40;                                             // 0x00164c84: addiu $sp, $sp, 0x40
}