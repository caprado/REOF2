void func_00112bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_8;
    
    a3 = a3 << 0x10;                                            // 0x00112bb0: sll $a3, $a3, 0x10
    t1 = t1 << 0x10;                                            // 0x00112bb4: sll $t1, $t1, 0x10
    a3 = a3 >> 0x10;                                            // 0x00112bb8: sra $a3, $a3, 0x10
    t1 = t1 >> 0x10;                                            // 0x00112bbc: sra $t1, $t1, 0x10
    t1 = a3 + t1;                                               // 0x00112bc0: addu $t1, $a3, $t1
    a2 = a2 << 0x10;                                            // 0x00112bc4: sll $a2, $a2, 0x10
    t0 = t0 << 0x10;                                            // 0x00112bc8: sll $t0, $t0, 0x10
    t4 = local_0;                                               // 0x00112bcc: lbu $t4, 0($sp)
    a2 = a2 >> 0x10;                                            // 0x00112bd0: sra $a2, $a2, 0x10
    t0 = t0 >> 0x10;                                            // 0x00112bd4: sra $t0, $t0, 0x10
    t1 = t1 << 4;                                               // 0x00112bd8: sll $t1, $t1, 4
    a3 = a3 << 4;                                               // 0x00112bdc: sll $a3, $a3, 4
    t0 = a2 + t0;                                               // 0x00112be4: addu $t0, $a2, $t0
    t3 = t3 & 0xff;                                             // 0x00112be8: andi $t3, $t3, 0xff
    t5 = local_8;                                               // 0x00112bec: lbu $t5, 8($sp)
    v0 = 0 | 0xfe00;                                            // 0x00112bf4: ori $v0, $zero, 0xfe00
    t0 = t0 << 4;                                               // 0x00112bfc: sll $t0, $t0, 4
    a2 = a2 << 4;                                               // 0x00112c00: sll $a2, $a2, 4
    t2 = t2 & 0xff;                                             // 0x00112c04: andi $t2, $t2, 0xff
    t2 = t2 | v0;                                               // 0x00112c18: or $t2, $t2, $v0
    t4 = t4 | t3;                                               // 0x00112c1c: or $t4, $t4, $t3
    a3 = a2 | a3;                                               // 0x00112c20: or $a3, $a2, $a3
    t1 = t0 | t1;                                               // 0x00112c24: or $t1, $t0, $t1
    a1 = a1 << 0x10;                                            // 0x00112c28: sll $a1, $a1, 0x10
    t1 = t1 | v1;                                               // 0x00112c30: or $t1, $t1, $v1
    a3 = a3 | v1;                                               // 0x00112c34: or $a3, $a3, $v1
    t2 = t2 | t4;                                               // 0x00112c38: or $t2, $t2, $t4
    t0 = a1 >> 0x10;                                            // 0x00112c40: sra $t0, $a1, 0x10
    a0 = 0x47;                                                  // 0x00112c44: addiu $a0, $zero, 0x47
    a1 = 5;                                                     // 0x00112c48: addiu $a1, $zero, 5
    t2 = t2 | t5;                                               // 0x00112c4c: or $t2, $t2, $t5
    t3 = 3 << 16;                                               // 0x00112c50: lui $t3, 3
    v0 = 6;                                                     // 0x00112c54: addiu $v0, $zero, 6
    v1 = 1;                                                     // 0x00112c58: addiu $v1, $zero, 1
    if (t0 == 0) goto label_0x112ca4;                           // 0x00112c84: beqz $t0, 0x112ca4
    v0 = t0 & 3;                                                // 0x00112c8c: andi $v0, $t0, 3
    v1 = 1 << 16;                                               // 0x00112c90: lui $v1, 1
    v0 = v0 | v1;                                               // 0x00112c98: or $v0, $v0, $v1
    goto label_0x112ca8;                                        // 0x00112c9c: b 0x112ca8
label_0x112ca4:
label_0x112ca8:
    /* memory sync */                                           // 0x00112ca8: sync 
    return;                                                     // 0x00112cac: jr $ra
    v0 = 6;                                                     // 0x00112cb0: addiu $v0, $zero, 6
}