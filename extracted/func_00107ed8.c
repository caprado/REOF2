void func_00107ed8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00107ed8: addiu $sp, $sp, -0x30
    a3 = s1 + 0x14;                                             // 0x00107efc: addiu $a3, $s1, 0x14
    s2 = *(int32_t*)((s1) + 0x10);                              // 0x00107f0c: lw $s2, 0x10($s1)
label_0x107f10:
    v1 = *(int32_t*)(a3);                                       // 0x00107f10: lw $v1, 0($a3)
    t1 = t1 + 1;                                                // 0x00107f14: addiu $t1, $t1, 1
    a2 = (t1 < s2) ? 1 : 0;                                     // 0x00107f18: slt $a2, $t1, $s2
    a0 = v1 & 0xffff;                                           // 0x00107f1c: andi $a0, $v1, 0xffff
    v1 = (unsigned)v1 >> 0x10;                                  // 0x00107f20: srl $v1, $v1, 0x10
    /* multiply: a0 * t0 -> hi:lo */                            // 0x00107f24: mult $ac2, $a0, $t0
    /* multiply: v1 * t0 -> hi:lo */                            // 0x00107f28: mult $ac3, $v1, $t0
    a0 = v0 + s3;                                               // 0x00107f2c: addu $a0, $v0, $s3
    a1 = (unsigned)a0 >> 0x10;                                  // 0x00107f30: srl $a1, $a0, 0x10
    a0 = a0 & 0xffff;                                           // 0x00107f34: andi $a0, $a0, 0xffff
    v1 = v1 + a1;                                               // 0x00107f38: addu $v1, $v1, $a1
    v0 = v1 << 0x10;                                            // 0x00107f3c: sll $v0, $v1, 0x10
    s3 = (unsigned)v1 >> 0x10;                                  // 0x00107f40: srl $s3, $v1, 0x10
    v0 = v0 + a0;                                               // 0x00107f44: addu $v0, $v0, $a0
    *(uint32_t*)(a3) = v0;                                      // 0x00107f48: sw $v0, 0($a3)
    if (a2 != 0) goto label_0x107f10;                           // 0x00107f4c: bnez $a2, 0x107f10
    a3 = a3 + 4;                                                // 0x00107f50: addiu $a3, $a3, 4
    if (s3 == 0) goto label_0x107fc0;                           // 0x00107f54: beqz $s3, 0x107fc0
    v0 = *(int32_t*)((s1) + 8);                                 // 0x00107f5c: lw $v0, 8($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00107f60: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x107fac;                           // 0x00107f64: bnez $v0, 0x107fac
    v0 = s2 << 2;                                               // 0x00107f68: sll $v0, $s2, 2
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00107f6c: lw $a1, 4($s1)
    func_00107e00();  // 107e00                                // 0x00107f74: jal 0x107e00
    a1 = a1 + 1;                                                // 0x00107f78: addiu $a1, $a1, 1
    a2 = *(int32_t*)((s1) + 0x10);                              // 0x00107f7c: lw $a2, 0x10($s1)
    a1 = s1 + 0xc;                                              // 0x00107f84: addiu $a1, $s1, 0xc
    a2 = a2 << 2;                                               // 0x00107f88: sll $a2, $a2, 2
    a0 = s0 + 0xc;                                              // 0x00107f8c: addiu $a0, $s0, 0xc
    func_00107ab8();  // 107ab8                                // 0x00107f90: jal 0x107ab8
    a2 = a2 + 8;                                                // 0x00107f94: addiu $a2, $a2, 8
    func_00107ea8();  // 107ea8                                // 0x00107fa0: jal 0x107ea8
    v0 = s2 << 2;                                               // 0x00107fa8: sll $v0, $s2, 2
label_0x107fac:
    s2 = s2 + 1;                                                // 0x00107fac: addiu $s2, $s2, 1
    v0 = v0 + s1;                                               // 0x00107fb0: addu $v0, $v0, $s1
    *(uint32_t*)((v0) + 0x14) = s3;                             // 0x00107fb4: sw $s3, 0x14($v0)
    *(uint32_t*)((s1) + 0x10) = s2;                             // 0x00107fb8: sw $s2, 0x10($s1)
label_0x107fc0:
    return;                                                     // 0x00107fd8: jr $ra
    sp = sp + 0x30;                                             // 0x00107fdc: addiu $sp, $sp, 0x30
}