void func_0018b970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x0018b970: addiu $sp, $sp, -0x90
    v1 = 0x21 << 16;                                            // 0x0018b974: lui $v1, 0x21
    v1 = v1 + 0x6340;                                           // 0x0018b97c: addiu $v1, $v1, 0x6340
    /* FPU: dps.w.ph $ac0, $sp, $s4 */                          // 0x0018b980: dps.w.ph $ac0, $sp, $s4
    at = ((unsigned)a1 < (unsigned)6) ? 1 : 0;                  // 0x0018b984: sltiu $at, $a1, 6
    /* FPU: subu.qb $zero, $sp, $s2 */                          // 0x0018b990: subu.qb $zero, $sp, $s2
    a0 = a1 << 2;                                               // 0x0018b994: sll $a0, $a1, 2
    v1 = v1 + a0;                                               // 0x0018b99c: addu $v1, $v1, $a0
    /* FPU: dpa.w.ph $ac0, $sp, $s0 */                          // 0x0018b9a0: dpa.w.ph $ac0, $sp, $s0
    s1 = g_00216340;  // Global at 0x00216340                   // 0x0018b9a8: lw $s1, 0($v1)
    if (at == 0) goto label_0x18bb10;                           // 0x0018b9ac: beqz $at, 0x18bb10
    v1 = 0x23 << 16;                                            // 0x0018b9b4: lui $v1, 0x23
    v1 = v1 + -0x5c70;                                          // 0x0018b9b8: addiu $v1, $v1, -0x5c70
    v1 = a0 + v1;                                               // 0x0018b9bc: addu $v1, $a0, $v1
    v1 = g_0022a390;  // Global at 0x0022a390                   // 0x0018b9c0: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x0018b9c4: jr $v1
    /* nop */                                                   // 0x0018b9c8: nop 
    goto label_0x18ba00;                                        // 0x0018b9cc: b 0x18ba00
label_0x18b9d4:
    a0 = *(int32_t*)(s2);                                       // 0x0018b9d4: lw $a0, 0($s2)
    a1 = s3 + 0x40;                                             // 0x0018b9d8: addiu $a1, $s3, 0x40
    a2 = s3 + 0x50;                                             // 0x0018b9dc: addiu $a2, $s3, 0x50
    a3 = s3 + 0x60;                                             // 0x0018b9e0: addiu $a3, $s3, 0x60
    t0 = s3 + 0x70;                                             // 0x0018b9e4: addiu $t0, $s3, 0x70
    t1 = s3 + 0x80;                                             // 0x0018b9e8: addiu $t1, $s3, 0x80
    func_0018bc20();  // 0x18bb30                                // 0x0018b9ec: jal 0x18bb30
    t2 = s3 + 0x90;                                             // 0x0018b9f0: addiu $t2, $s3, 0x90
    s3 = s3 + s1;                                               // 0x0018b9f4: addu $s3, $s3, $s1
    s2 = s2 + 4;                                                // 0x0018b9f8: addiu $s2, $s2, 4
    s0 = s0 + 1;                                                // 0x0018b9fc: addiu $s0, $s0, 1
label_0x18ba00:
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0018ba00: slt $v1, $s0, $s4
    if (v1 != 0) goto label_0x18b9d4;                           // 0x0018ba04: bnez $v1, 0x18b9d4
    /* nop */                                                   // 0x0018ba08: nop 
    goto label_0x18bb14;                                        // 0x0018ba0c: b 0x18bb14
    goto label_0x18ba48;                                        // 0x0018ba14: b 0x18ba48
label_0x18ba1c:
    a0 = *(int32_t*)(s2);                                       // 0x0018ba1c: lw $a0, 0($s2)
    a1 = s3 + 0x40;                                             // 0x0018ba20: addiu $a1, $s3, 0x40
    a2 = s3 + 0x50;                                             // 0x0018ba24: addiu $a2, $s3, 0x50
    a3 = s3 + 0x60;                                             // 0x0018ba28: addiu $a3, $s3, 0x60
    t0 = s3 + 0x70;                                             // 0x0018ba2c: addiu $t0, $s3, 0x70
    t1 = s3 + 0x80;                                             // 0x0018ba30: addiu $t1, $s3, 0x80
    func_0018bc20();  // 0x18bb30                                // 0x0018ba34: jal 0x18bb30
    t2 = s3 + 0x90;                                             // 0x0018ba38: addiu $t2, $s3, 0x90
    s3 = s3 + s1;                                               // 0x0018ba3c: addu $s3, $s3, $s1
    s2 = s2 + 4;                                                // 0x0018ba40: addiu $s2, $s2, 4
    s0 = s0 + 1;                                                // 0x0018ba44: addiu $s0, $s0, 1
label_0x18ba48:
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0018ba48: slt $v1, $s0, $s4
    if (v1 != 0) goto label_0x18ba1c;                           // 0x0018ba4c: bnez $v1, 0x18ba1c
    /* nop */                                                   // 0x0018ba50: nop 
    goto label_0x18bb10;                                        // 0x0018ba54: b 0x18bb10
    /* nop */                                                   // 0x0018ba58: nop 
    goto label_0x18ba90;                                        // 0x0018ba5c: b 0x18ba90
label_0x18ba64:
    a0 = *(int32_t*)(s2);                                       // 0x0018ba64: lw $a0, 0($s2)
    a1 = s3 + 0x40;                                             // 0x0018ba68: addiu $a1, $s3, 0x40
    a2 = s3 + 0x50;                                             // 0x0018ba6c: addiu $a2, $s3, 0x50
    a3 = s3 + 0x60;                                             // 0x0018ba70: addiu $a3, $s3, 0x60
    t0 = s3 + 0x70;                                             // 0x0018ba74: addiu $t0, $s3, 0x70
    t1 = s3 + 0x80;                                             // 0x0018ba78: addiu $t1, $s3, 0x80
    func_0018bc20();  // 0x18bb30                                // 0x0018ba7c: jal 0x18bb30
    t2 = s3 + 0x90;                                             // 0x0018ba80: addiu $t2, $s3, 0x90
    s3 = s3 + s1;                                               // 0x0018ba84: addu $s3, $s3, $s1
    s2 = s2 + 4;                                                // 0x0018ba88: addiu $s2, $s2, 4
    s0 = s0 + 1;                                                // 0x0018ba8c: addiu $s0, $s0, 1
label_0x18ba90:
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0018ba90: slt $v1, $s0, $s4
    if (v1 != 0) goto label_0x18ba64;                           // 0x0018ba94: bnez $v1, 0x18ba64
    /* nop */                                                   // 0x0018ba98: nop 
    goto label_0x18bb10;                                        // 0x0018ba9c: b 0x18bb10
    /* nop */                                                   // 0x0018baa0: nop 
    goto label_0x18bb04;                                        // 0x0018baa4: b 0x18bb04
label_0x18baac:
    v0 = s3 + 0xa0;                                             // 0x0018baac: addiu $v0, $s3, 0xa0
    v1 = s3 + 0xb0;                                             // 0x0018bab0: addiu $v1, $s3, 0xb0
    a1 = s3 + 0x40;                                             // 0x0018bab8: addiu $a1, $s3, 0x40
    v0 = s3 + 0xc0;                                             // 0x0018bac0: addiu $v0, $s3, 0xc0
    v1 = s3 + 0xd0;                                             // 0x0018bac8: addiu $v1, $s3, 0xd0
    v0 = s3 + 0xe0;                                             // 0x0018bacc: addiu $v0, $s3, 0xe0
    a2 = s3 + 0x50;                                             // 0x0018bad8: addiu $a2, $s3, 0x50
    a0 = *(int32_t*)(s2);                                       // 0x0018badc: lw $a0, 0($s2)
    a3 = s3 + 0x60;                                             // 0x0018bae0: addiu $a3, $s3, 0x60
    t3 = *(int32_t*)((gp) + -0x6494);                           // 0x0018bae4: lw $t3, -0x6494($gp)
    t0 = s3 + 0x70;                                             // 0x0018bae8: addiu $t0, $s3, 0x70
    t1 = s3 + 0x80;                                             // 0x0018baec: addiu $t1, $s3, 0x80
    func_0018be00();  // 0x18bc20                                // 0x0018baf0: jal 0x18bc20
    t2 = s3 + 0x90;                                             // 0x0018baf4: addiu $t2, $s3, 0x90
    s3 = s3 + s1;                                               // 0x0018baf8: addu $s3, $s3, $s1
    s2 = s2 + 4;                                                // 0x0018bafc: addiu $s2, $s2, 4
    s0 = s0 + 1;                                                // 0x0018bb00: addiu $s0, $s0, 1
label_0x18bb04:
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0018bb04: slt $v1, $s0, $s4
    if (v1 != 0) goto label_0x18baac;                           // 0x0018bb08: bnez $v1, 0x18baac
    /* nop */                                                   // 0x0018bb0c: nop 
label_0x18bb10:
label_0x18bb14:
    /* FPU: ld.b $w1, -0x4d($zero) */                           // 0x0018bb18: ld.b $w1, -0x4d($zero)
    /* FPU: aver_u.h $w1, $w0, $w18 */                          // 0x0018bb1c: aver_u.h $w1, $w0, $w18
    /* FPU: xori.b $w1, $w0, 0xb1 */                            // 0x0018bb20: xori.b $w1, $w0, 0xb1
    return;                                                     // 0x0018bb28: jr $ra
    sp = sp + 0x90;                                             // 0x0018bb2c: addiu $sp, $sp, 0x90
}