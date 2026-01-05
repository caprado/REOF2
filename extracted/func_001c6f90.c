void func_001c6f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6f90: addiu $sp, $sp, -0x20
    func_001ae5c0();  // 1ae5c0                                // 0x001c6fa0: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001c6fa4: addiu $a0, $zero, 1
    v1 = 0x6756;                                                // 0x001c6fa8: addiu $v1, $zero, 0x6756
    t0 = s0 + 4;                                                // 0x001c6fac: addiu $t0, $s0, 4
    *(uint16_t*)(s0) = v1;                                      // 0x001c6fb0: sh $v1, 0($s0)
    t1 = v0 & 0xffff;                                           // 0x001c6fb4: andi $t1, $v0, 0xffff
    *(uint16_t*)((s0) + 2) = v0;                                // 0x001c6fb8: sh $v0, 2($s0)
    *(uint16_t*)((s0) + 4) = 0;                                 // 0x001c6fc0: sh $zero, 4($s0)
    *(uint16_t*)((s0) + 6) = 0;                                 // 0x001c6fc4: sh $zero, 6($s0)
    s0 = s0 + 8;                                                // 0x001c6fc8: addiu $s0, $s0, 8
    v1 = 1 << 16;                                               // 0x001c6fcc: lui $v1, 1
    a2 = 0 | 0xff53;                                            // 0x001c6fd0: ori $a2, $zero, 0xff53
    a0 = v1 | 0xfe5c;                                           // 0x001c6fd4: ori $a0, $v1, 0xfe5c
label_0x1c6fd8:
    a3 = *(uint16_t*)(t0);                                      // 0x001c6fd8: lhu $a3, 0($t0)
    v1 = t1 & 0xffff;                                           // 0x001c6fdc: andi $v1, $t1, 0xffff
    a1 = *(uint16_t*)(s0);                                      // 0x001c6fe0: lhu $a1, 0($s0)
    a1 = a3 + a1;                                               // 0x001c6fe4: addu $a1, $a3, $a1
    *(uint16_t*)(t0) = a1;                                      // 0x001c6fe8: sh $a1, 0($t0)
    a1 = *(uint16_t*)(s0);                                      // 0x001c6fec: lhu $a1, 0($s0)
    a1 = a1 ^ t1;                                               // 0x001c6ff0: xor $a1, $a1, $t1
    *(uint16_t*)(s0) = a1;                                      // 0x001c6ff4: sh $a1, 0($s0)
    if (v1 != 0) goto label_0x1c7004;                           // 0x001c6ff8: bnez $v1, 0x1c7004
    s0 = s0 + 2;                                                // 0x001c6ffc: addiu $s0, $s0, 2
label_0x1c7004:
    a3 = t1 & 0xffff;                                           // 0x001c7004: andi $a3, $t1, 0xffff
    t2 = t2 + 1;                                                // 0x001c7008: addiu $t2, $t2, 1
    a1 = a3 << 2;                                               // 0x001c700c: sll $a1, $a3, 2
    v1 = (t2 < a0) ? 1 : 0;                                     // 0x001c7010: slt $v1, $t2, $a0
    a1 = a1 + a3;                                               // 0x001c7014: addu $a1, $a1, $a3
    a1 = a1 << 1;                                               // 0x001c7018: sll $a1, $a1, 1
    a1 = a1 + a3;                                               // 0x001c701c: addu $a1, $a1, $a3
    a1 = a1 << 4;                                               // 0x001c7020: sll $a1, $a1, 4
    /* divide: a1 / a2 -> hi:lo */                              // 0x001c7024: div $zero, $a1, $a2
    /* nop */                                                   // 0x001c7028: nop 
    /* nop */                                                   // 0x001c702c: nop 
    /* mfhi $a1 */                                              // 0x001c7030
    if (v1 != 0) goto label_0x1c6fd8;                           // 0x001c7034: bnez $v1, 0x1c6fd8
    t1 = a1 & 0xffff;                                           // 0x001c7038: andi $t1, $a1, 0xffff
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7040: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7044: jr $ra
    sp = sp + 0x20;                                             // 0x001c7048: addiu $sp, $sp, 0x20
}