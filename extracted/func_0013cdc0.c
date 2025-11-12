void func_0013cdc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cdc0: addiu $sp, $sp, -0x10
    if (a2 != 0) goto label_0x13cde8;                           // 0x0013cdcc: bnez $a2, 0x13cde8
    a0 = 0x22 << 16;                                            // 0x0013cdd4: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013cdd8: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cddc: addiu $a0, $a0, 0x5be8
    goto label_0x13ce44;                                        // 0x0013cde0: b 0x13ce44
    v0 = -1;                                                    // 0x0013cde4: addiu $v0, $zero, -1
label_0x13cde8:
    if (v1 < 0) goto label_0x13ce04;                            // 0x0013cde8: bltz $v1, 0x13ce04
    a0 = 0x22 << 16;                                            // 0x0013cdec: lui $a0, 0x22
    v0 = *(int32_t*)((a2) + 0x24);                              // 0x0013cdf0: lw $v0, 0x24($a2)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x0013cdf4: slt $v0, $v1, $v0
    /* bnezl $v0, 0x13ce18 */                                   // 0x0013cdf8: bnezl $v0, 0x13ce18
    a1 = *(int32_t*)((a2) + 0x20);                              // 0x0013cdfc: lw $a1, 0x20($a2)
    a0 = 0x22 << 16;                                            // 0x0013ce00: lui $a0, 0x22
label_0x13ce04:
    func_0013d248();  // 0x13d1b8                                // 0x0013ce04: jal 0x13d1b8
    a0 = &str_00225c38;  // "E0012: Can not find stream ID =%d\n" // 0x0013ce08: addiu $a0, $a0, 0x5c38
    goto label_0x13ce44;                                        // 0x0013ce0c: b 0x13ce44
    v0 = -1;                                                    // 0x0013ce10: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013ce14: nop 
    a1 = a1 + v1;                                               // 0x0013ce18: addu $a1, $a1, $v1
    a0 = a1 + 0xf;                                              // 0x0013ce1c: addiu $a0, $a1, 0xf
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x0013ce20: slti $v1, $a1, 0
    if (v1 != 0) v0 = a0;                                       // 0x0013ce28: movn $v0, $a0, $v1
    v0 = v0 >> 4;                                               // 0x0013ce2c: sra $v0, $v0, 4
    a0 = v0 << 4;                                               // 0x0013ce30: sll $a0, $v0, 4
    v0 = a1 - a0;                                               // 0x0013ce34: subu $v0, $a1, $a0
    v1 = v0 << 5;                                               // 0x0013ce38: sll $v1, $v0, 5
    v1 = v1 + a2;                                               // 0x0013ce3c: addu $v1, $v1, $a2
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0013ce40: lw $v0, 0x38($v1)
label_0x13ce44:
    return;                                                     // 0x0013ce48: jr $ra
    sp = sp + 0x10;                                             // 0x0013ce4c: addiu $sp, $sp, 0x10
}