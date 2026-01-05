void func_001a1f20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001a1f20: addiu $sp, $sp, -0x80
    a0 = 0x2a << 16;                                            // 0x001a1f24: lui $a0, 0x2a
    a0 = a0 + 0x500;                                            // 0x001a1f2c: addiu $a0, $a0, 0x500
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a1f34: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a1f40: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a1f48: addu.qb $zero, $sp, $s1
    s2 = *(int32_t*)((a2) + 4);                                 // 0x001a1f50: lw $s2, 4($a2)
    *(uint16_t*)((a1) + 2) = s2;                                // 0x001a1f58: sh $s2, 2($a1)
    func_001898e0();  // 1898e0                                // 0x001a1f60: jal 0x1898e0
    a1 = s2 << 3;                                               // 0x001a1f64: sll $a1, $s2, 3
    *(uint32_t*)((s5) + 4) = s4;                                // 0x001a1f70: sw $s4, 4($s5)
    goto label_0x1a1f8c;                                        // 0x001a1f74: b 0x1a1f8c
    a0 = 0x20;                                                  // 0x001a1f78: addiu $a0, $zero, 0x20
label_0x1a1f7c:
    v1 = s4 + v1;                                               // 0x001a1f7c: addu $v1, $s4, $v1
    a1 = a1 + 1;                                                // 0x001a1f80: addiu $a1, $a1, 1
    g_80000000 = a0;  // Global at 0x80000000                   // 0x001a1f84: sb $a0, 0($v1)
    g_80000002 = 0;  // Global at 0x80000002                    // 0x001a1f88: sh $zero, 2($v1)
label_0x1a1f8c:
    v1 = (a1 < s2) ? 1 : 0;                                     // 0x001a1f8c: slt $v1, $a1, $s2
    if (v1 != 0) goto label_0x1a1f7c;                           // 0x001a1f90: bnez $v1, 0x1a1f7c
    v1 = a1 << 3;                                               // 0x001a1f94: sll $v1, $a1, 3
    s3 = s0 + 0xc;                                              // 0x001a1f98: addiu $s3, $s0, 0xc
    goto label_0x1a2094;                                        // 0x001a1f9c: b 0x1a2094
label_0x1a1fa4:
    s6 = *(int32_t*)(s3);                                       // 0x001a1fa4: lw $s6, 0($s3)
    v1 = 0x8000 << 16;                                          // 0x001a1fa8: lui $v1, 0x8000
    v1 = s6 & v1;                                               // 0x001a1fac: and $v1, $s6, $v1
    if (v1 == 0) goto label_0x1a2088;                           // 0x001a1fb0: beqz $v1, 0x1a2088
    /* nop */                                                   // 0x001a1fb4: nop 
    v0 = s0 << 3;                                               // 0x001a1fb8: sll $v0, $s0, 3
    s1 = s4 + v0;                                               // 0x001a1fc0: addu $s1, $s4, $v0
    func_001a20e0();  // 1a20e0                                // 0x001a1fc4: jal 0x1a20e0
    a0 = s6 & 0x1ff;                                            // 0x001a1fcc: andi $a0, $s6, 0x1ff
    v1 = 0x100;                                                 // 0x001a1fd0: addiu $v1, $zero, 0x100
    if (a0 == v1) goto label_0x1a2084;                          // 0x001a1fd4: beq $a0, $v1, 0x1a2084
    v1 = 8;                                                     // 0x001a1fd8: addiu $v1, $zero, 8
    v1 = 0x80;                                                  // 0x001a1fdc: addiu $v1, $zero, 0x80
    if (a0 == v1) goto label_0x1a207c;                          // 0x001a1fe0: beq $a0, $v1, 0x1a207c
    v1 = 7;                                                     // 0x001a1fe4: addiu $v1, $zero, 7
    v1 = 0x40;                                                  // 0x001a1fe8: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x1a2074;                          // 0x001a1fec: beq $a0, $v1, 0x1a2074
    v1 = 6;                                                     // 0x001a1ff0: addiu $v1, $zero, 6
    v1 = 0x20;                                                  // 0x001a1ff4: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x1a206c;                          // 0x001a1ff8: beq $a0, $v1, 0x1a206c
    v1 = 5;                                                     // 0x001a1ffc: addiu $v1, $zero, 5
    v1 = 0x10;                                                  // 0x001a2000: addiu $v1, $zero, 0x10
    if (a0 == v1) goto label_0x1a2064;                          // 0x001a2004: beq $a0, $v1, 0x1a2064
    v1 = 4;                                                     // 0x001a2008: addiu $v1, $zero, 4
    v1 = 8;                                                     // 0x001a200c: addiu $v1, $zero, 8
    if (a0 == v1) goto label_0x1a205c;                          // 0x001a2010: beq $a0, $v1, 0x1a205c
    v1 = 3;                                                     // 0x001a2014: addiu $v1, $zero, 3
    v1 = 4;                                                     // 0x001a2018: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1a2054;                          // 0x001a201c: beq $a0, $v1, 0x1a2054
    v1 = 2;                                                     // 0x001a2020: addiu $v1, $zero, 2
    v1 = 2;                                                     // 0x001a2024: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1a204c;                          // 0x001a2028: beq $a0, $v1, 0x1a204c
    v1 = 1;                                                     // 0x001a202c: addiu $v1, $zero, 1
    v1 = 1;                                                     // 0x001a2030: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1a2044;                          // 0x001a2034: beq $a0, $v1, 0x1a2044
    /* nop */                                                   // 0x001a2038: nop 
    goto label_0x1a208c;                                        // 0x001a203c: b 0x1a208c
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a2040: lw $v1, 8($s3)
label_0x1a2044:
    goto label_0x1a2088;                                        // 0x001a2044: b 0x1a2088
    *(uint8_t*)((s1) + 1) = 0;                                  // 0x001a2048: sb $zero, 1($s1)
label_0x1a204c:
    goto label_0x1a2088;                                        // 0x001a204c: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2050: sb $v1, 1($s1)
label_0x1a2054:
    goto label_0x1a2088;                                        // 0x001a2054: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2058: sb $v1, 1($s1)
label_0x1a205c:
    goto label_0x1a2088;                                        // 0x001a205c: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2060: sb $v1, 1($s1)
label_0x1a2064:
    goto label_0x1a2088;                                        // 0x001a2064: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2068: sb $v1, 1($s1)
label_0x1a206c:
    goto label_0x1a2088;                                        // 0x001a206c: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2070: sb $v1, 1($s1)
label_0x1a2074:
    goto label_0x1a2088;                                        // 0x001a2074: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2078: sb $v1, 1($s1)
label_0x1a207c:
    goto label_0x1a2088;                                        // 0x001a207c: b 0x1a2088
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2080: sb $v1, 1($s1)
label_0x1a2084:
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001a2084: sb $v1, 1($s1)
label_0x1a2088:
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a2088: lw $v1, 8($s3)
label_0x1a208c:
    s0 = s0 + 1;                                                // 0x001a208c: addiu $s0, $s0, 1
    s3 = s3 + v1;                                               // 0x001a2090: addu $s3, $s3, $v1
label_0x1a2094:
    v1 = (s0 < s2) ? 1 : 0;                                     // 0x001a2094: slt $v1, $s0, $s2
    if (v1 != 0) goto label_0x1a1fa4;                           // 0x001a2098: bnez $v1, 0x1a1fa4
    /* nop */                                                   // 0x001a209c: nop 
    a0 = *(int32_t*)((s5) + 4);                                 // 0x001a20a0: lw $a0, 4($s5)
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a20a4: lw $v1, -0x6428($gp)
    v1 = a0 - v1;                                               // 0x001a20a8: subu $v1, $a0, $v1
    *(uint32_t*)((s5) + 4) = v1;                                // 0x001a20ac: sw $v1, 4($s5)
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001a20b4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001a20b8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a20bc: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a20c4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a20c8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a20cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a20d0: jr $ra
    sp = sp + 0x80;                                             // 0x001a20d4: addiu $sp, $sp, 0x80
}