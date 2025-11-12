void func_001c7050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c7050: addiu $sp, $sp, -0x50
    v0 = 5;                                                     // 0x001c7054: addiu $v0, $zero, 5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c705c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7064: addu.qb $zero, $sp, $s1
    if (a2 != v0) goto label_0x1c708c;                          // 0x001c7074: bne $a2, $v0, 0x1c708c
    func_001c7050();  // 0x1c6f90                                // 0x001c707c: jal 0x1c6f90
    /* nop */                                                   // 0x001c7080: nop 
    goto label_0x1c7154;                                        // 0x001c7084: b 0x1c7154
label_0x1c708c:
label_0x1c7090:
    func_001ae690();  // 0x1ae5c0                                // 0x001c7090: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001c7094: addiu $a0, $zero, 1
    v1 = v0 & 0xffff;                                           // 0x001c7098: andi $v1, $v0, 0xffff
    s3 = s3 + 1;                                                // 0x001c709c: addiu $s3, $s3, 1
    *(uint8_t*)(s2) = v1;                                       // 0x001c70a0: sb $v1, 0($s2)
    s0 = s0 + -1;                                               // 0x001c70a4: addiu $s0, $s0, -1
    v1 = (s3 < 0x10) ? 1 : 0;                                   // 0x001c70a8: slti $v1, $s3, 0x10
    if (v1 != 0) goto label_0x1c7090;                           // 0x001c70ac: bnez $v1, 0x1c7090
    s2 = s2 + 1;                                                // 0x001c70b0: addiu $s2, $s2, 1
    v1 = 0 | 0x9012;                                            // 0x001c70b4: ori $v1, $zero, 0x9012
    *(uint16_t*)(s1) = v1;                                      // 0x001c70bc: sh $v1, 0($s1)
    t2 = s1 + 4;                                                // 0x001c70c0: addiu $t2, $s1, 4
    *(uint16_t*)((s1) + 4) = 0;                                 // 0x001c70c4: sh $zero, 4($s1)
    t3 = *(uint16_t*)((s1) + 2);                                // 0x001c70cc: lhu $t3, 2($s1)
    if (s0 >= 0) goto label_0x1c70e0;                           // 0x001c70d0: bgez $s0, 0x1c70e0
    t1 = s0 >> 1;                                               // 0x001c70d4: sra $t1, $s0, 1
    v1 = s0 + 1;                                                // 0x001c70d8: addiu $v1, $s0, 1
    t1 = v1 >> 1;                                               // 0x001c70dc: sra $t1, $v1, 1
label_0x1c70e0:
    goto label_0x1c7144;                                        // 0x001c70e0: b 0x1c7144
    a1 = 0 | 0xff53;                                            // 0x001c70e4: ori $a1, $zero, 0xff53
label_0x1c70e8:
    a3 = *(uint16_t*)(t2);                                      // 0x001c70e8: lhu $a3, 0($t2)
    v1 = t3 & 0xffff;                                           // 0x001c70ec: andi $v1, $t3, 0xffff
    a2 = *(uint16_t*)(a0);                                      // 0x001c70f0: lhu $a2, 0($a0)
    a2 = a3 + a2;                                               // 0x001c70f4: addu $a2, $a3, $a2
    *(uint16_t*)(t2) = a2;                                      // 0x001c70f8: sh $a2, 0($t2)
    a2 = *(uint16_t*)(a0);                                      // 0x001c70fc: lhu $a2, 0($a0)
    a2 = a2 ^ t3;                                               // 0x001c7100: xor $a2, $a2, $t3
    *(uint16_t*)(a0) = a2;                                      // 0x001c7104: sh $a2, 0($a0)
    if (v1 != 0) goto label_0x1c7114;                           // 0x001c7108: bnez $v1, 0x1c7114
    a0 = a0 + 2;                                                // 0x001c710c: addiu $a0, $a0, 2
label_0x1c7114:
    a2 = t3 & 0xffff;                                           // 0x001c7114: andi $a2, $t3, 0xffff
    t0 = t0 + 1;                                                // 0x001c7118: addiu $t0, $t0, 1
    v1 = a2 << 2;                                               // 0x001c711c: sll $v1, $a2, 2
    v1 = v1 + a2;                                               // 0x001c7120: addu $v1, $v1, $a2
    v1 = v1 << 1;                                               // 0x001c7124: sll $v1, $v1, 1
    v1 = v1 + a2;                                               // 0x001c7128: addu $v1, $v1, $a2
    v1 = v1 << 4;                                               // 0x001c712c: sll $v1, $v1, 4
    /* divide: v1 / a1 -> hi:lo */                              // 0x001c7130: div $zero, $v1, $a1
    /* nop */                                                   // 0x001c7134: nop 
    /* nop */                                                   // 0x001c7138: nop 
    /* mfhi $v1 */                                              // 0x001c713c
    t3 = v1 & 0xffff;                                           // 0x001c7140: andi $t3, $v1, 0xffff
label_0x1c7144:
    v1 = (t0 < t1) ? 1 : 0;                                     // 0x001c7144: slt $v1, $t0, $t1
    if (v1 != 0) goto label_0x1c70e8;                           // 0x001c7148: bnez $v1, 0x1c70e8
    /* nop */                                                   // 0x001c714c: nop 
label_0x1c7154:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7158: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c715c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7160: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7164: jr $ra
    sp = sp + 0x50;                                             // 0x001c7168: addiu $sp, $sp, 0x50
}