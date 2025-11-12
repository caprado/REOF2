void func_001d9fc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x190;                                           // 0x001d9fc0: addiu $sp, $sp, -0x190
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d9fc8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d9fd0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d9fe0: addu.qb $zero, $sp, $s1
    func_001a2780();  // 0x1a2740                                // 0x001d9fe8: jal 0x1a2740
    *(uint16_t*)((s3) + 0x816) = v0;                            // 0x001d9ff0: sh $v0, 0x816($s3)
    func_001a27b0();  // 0x1a2780                                // 0x001d9ff4: jal 0x1a2780
    goto label_0x1da028;                                        // 0x001da000: b 0x1da028
label_0x1da008:
    func_001a2800();  // 0x1a27b0                                // 0x001da008: jal 0x1a27b0
    a0 = s1 & 0xffff;                                           // 0x001da010: andi $a0, $s1, 0xffff
    v1 = s1 + 1;                                                // 0x001da014: addiu $v1, $s1, 1
    a0 = a0 << 1;                                               // 0x001da018: sll $a0, $a0, 1
    s1 = v1 & 0xffff;                                           // 0x001da01c: andi $s1, $v1, 0xffff
    v1 = a0 + sp;                                               // 0x001da020: addu $v1, $a0, $sp
    *(uint16_t*)((v1) + 0xc0) = v0;                             // 0x001da024: sh $v0, 0xc0($v1)
label_0x1da028:
    v1 = s1 & 0xffff;                                           // 0x001da028: andi $v1, $s1, 0xffff
    v0 = (v1 < s0) ? 1 : 0;                                     // 0x001da02c: slt $v0, $v1, $s0
    if (v0 != 0) goto label_0x1da008;                           // 0x001da030: bnez $v0, 0x1da008
    a1 = s1 & 0xffff;                                           // 0x001da034: andi $a1, $s1, 0xffff
    a1 = *(uint16_t*)((s3) + 0x816);                            // 0x001da038: lhu $a1, 0x816($s3)
    v0 = v1 << 1;                                               // 0x001da03c: sll $v0, $v1, 1
    v1 = v0 + sp;                                               // 0x001da040: addu $v1, $v0, $sp
    at = 0x31 << 16;                                            // 0x001da044: lui $at, 0x31
    v0 = 0x20 << 16;                                            // 0x001da048: lui $v0, 0x20
    a0 = sp + 0x70;                                             // 0x001da04c: addiu $a0, $sp, 0x70
    *(uint16_t*)((v1) + 0xc0) = a1;                             // 0x001da050: sh $a1, 0xc0($v1)
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001da054: lw $v1, 0x37fc($at)
    func_0018fbd0();  // 0x18fba0                                // 0x001da058: jal 0x18fba0
    s1 = v1 + v0;                                               // 0x001da05c: addu $s1, $v1, $v0
    goto label_0x1da1b8;                                        // 0x001da060: b 0x1da1b8
label_0x1da068:
    a0 = sp + 0xb0;                                             // 0x001da068: addiu $a0, $sp, 0xb0
    thunk_func_001a1c30();  // 0x1da600                          // 0x001da070: jal 0x1da600
    func_001922b0();  // 0x192230                                // 0x001da078: jal 0x192230
    a0 = sp + 0xb0;                                             // 0x001da07c: addiu $a0, $sp, 0xb0
    *(uint32_t*)((s3) + 0x80c) = v0;                            // 0x001da080: sw $v0, 0x80c($s3)
    func_001b0e80();  // 0x1b0e30                                // 0x001da084: jal 0x1b0e30
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001da088: lw $a0, 0x80c($s3)
    a1 = *(int32_t*)((s3) + 0x80c);                             // 0x001da08c: lw $a1, 0x80c($s3)
    func_00193540();  // 0x193400                                // 0x001da090: jal 0x193400
    func_001930f0();  // 0x1930d0                                // 0x001da09c: jal 0x1930d0
    a1 = sp + 0x70;                                             // 0x001da0a0: addiu $a1, $sp, 0x70
    v1 = s4 & 0xffff;                                           // 0x001da0a4: andi $v1, $s4, 0xffff
    a1 = 0x3a << 16;                                            // 0x001da0a8: lui $a1, 0x3a
    a2 = v1 << 1;                                               // 0x001da0ac: sll $a2, $v1, 1
    a1 = a1 + -0x48c0;                                          // 0x001da0b0: addiu $a1, $a1, -0x48c0
    v1 = a2 + v1;                                               // 0x001da0b4: addu $v1, $a2, $v1
    at = 1 << 16;                                               // 0x001da0b8: lui $at, 1
    v1 = v1 << 7;                                               // 0x001da0bc: sll $v1, $v1, 7
    a0 = a1 + a2;                                               // 0x001da0c0: addu $a0, $a1, $a2
    a1 = a1 + v1;                                               // 0x001da0c4: addu $a1, $a1, $v1
    at = at | 0x2824;                                           // 0x001da0c8: ori $at, $at, 0x2824
    a0 = a0 + at;                                               // 0x001da0cc: addu $a0, $a0, $at
    v0 = s5 << 1;                                               // 0x001da0d0: sll $v0, $s5, 1
    v1 = a2 + sp;                                               // 0x001da0d4: addu $v1, $a2, $sp
    v0 = v0 + sp;                                               // 0x001da0d8: addu $v0, $v0, $sp
    *(uint16_t*)(a0) = 0;                                       // 0x001da0dc: sh $zero, 0($a0)
    a2 = v1 + 0xc0;                                             // 0x001da0e0: addiu $a2, $v1, 0xc0
    v0 = g_002000c2;  // Global at 0x002000c2                   // 0x001da0e4: lhu $v0, 0xc2($v0)
    at = 0 | 0x9820;                                            // 0x001da0e8: ori $at, $zero, 0x9820
    t0 = *(uint16_t*)(a2);                                      // 0x001da0ec: lhu $t0, 0($a2)
    goto label_0x1da18c;                                        // 0x001da0f4: b 0x1da18c
    v1 = a1 + at;                                               // 0x001da0f8: addu $v1, $a1, $at
label_0x1da0fc:
    t1 = *(uint16_t*)(a2);                                      // 0x001da0fc: lhu $t1, 0($a2)
    if (t2 == t1) goto label_0x1da180;                          // 0x001da100: beq $t2, $t1, 0x1da180
    /* nop */                                                   // 0x001da104: nop 
    t1 = *(int16_t*)(a0);                                       // 0x001da108: lh $t1, 0($a0)
    t3 = 8;                                                     // 0x001da10c: addiu $t3, $zero, 8
    t1 = t1 << 6;                                               // 0x001da114: sll $t1, $t1, 6
    t1 = a1 + t1;                                               // 0x001da118: addu $t1, $a1, $t1
    t4 = t1 + 0x820;                                            // 0x001da11c: addiu $t4, $t1, 0x820
label_0x1da120:
    t2 = *(int32_t*)(t5);                                       // 0x001da120: lw $t2, 0($t5)
    t3 = t3 + -1;                                               // 0x001da124: addiu $t3, $t3, -1
    t1 = *(int32_t*)((t5) + 4);                                 // 0x001da128: lw $t1, 4($t5)
    *(uint32_t*)(t4) = t2;                                      // 0x001da12c: sw $t2, 0($t4)
    t5 = t5 + 8;                                                // 0x001da130: addiu $t5, $t5, 8
    *(uint32_t*)((t4) + 4) = t1;                                // 0x001da134: sw $t1, 4($t4)
    if (t3 > 0) goto label_0x1da120;                            // 0x001da138: bgtz $t3, 0x1da120
    t4 = t4 + 8;                                                // 0x001da13c: addiu $t4, $t4, 8
    t1 = *(int16_t*)(a0);                                       // 0x001da140: lh $t1, 0($a0)
    t4 = a3 + 0x80;                                             // 0x001da144: addiu $t4, $a3, 0x80
    t3 = 8;                                                     // 0x001da148: addiu $t3, $zero, 8
    t1 = t1 << 6;                                               // 0x001da14c: sll $t1, $t1, 6
    t5 = v1 + t1;                                               // 0x001da150: addu $t5, $v1, $t1
label_0x1da154:
    t2 = *(int32_t*)(t4);                                       // 0x001da154: lw $t2, 0($t4)
    t3 = t3 + -1;                                               // 0x001da158: addiu $t3, $t3, -1
    t1 = *(int32_t*)((t4) + 4);                                 // 0x001da15c: lw $t1, 4($t4)
    *(uint32_t*)(t5) = t2;                                      // 0x001da160: sw $t2, 0($t5)
    t4 = t4 + 8;                                                // 0x001da164: addiu $t4, $t4, 8
    *(uint32_t*)((t5) + 4) = t1;                                // 0x001da168: sw $t1, 4($t5)
    if (t3 > 0) goto label_0x1da154;                            // 0x001da16c: bgtz $t3, 0x1da154
    t5 = t5 + 8;                                                // 0x001da170: addiu $t5, $t5, 8
    t1 = *(int16_t*)(a0);                                       // 0x001da174: lh $t1, 0($a0)
    t1 = t1 + 1;                                                // 0x001da178: addiu $t1, $t1, 1
    *(uint16_t*)(a0) = t1;                                      // 0x001da17c: sh $t1, 0($a0)
label_0x1da180:
    t0 = t0 + 1;                                                // 0x001da180: addiu $t0, $t0, 1
    a3 = a3 + 0x190;                                            // 0x001da184: addiu $a3, $a3, 0x190
    t0 = t0 & 0xffff;                                           // 0x001da188: andi $t0, $t0, 0xffff
label_0x1da18c:
    t2 = t0 & 0xffff;                                           // 0x001da18c: andi $t2, $t0, 0xffff
    t1 = (t2 < v0) ? 1 : 0;                                     // 0x001da190: slt $t1, $t2, $v0
    if (t1 != 0) goto label_0x1da0fc;                           // 0x001da194: bnez $t1, 0x1da0fc
    /* nop */                                                   // 0x001da198: nop 
    func_00192350();  // 0x192330                                // 0x001da19c: jal 0x192330
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001da1a0: lw $a0, 0x80c($s3)
    func_001b0ec0();  // 0x1b0e80                                // 0x001da1a4: jal 0x1b0e80
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001da1a8: lw $a0, 0x80c($s3)
    v1 = s4 + 1;                                                // 0x001da1ac: addiu $v1, $s4, 1
    *(uint32_t*)((s3) + 0x80c) = 0;                             // 0x001da1b0: sw $zero, 0x80c($s3)
    s4 = v1 & 0xffff;                                           // 0x001da1b4: andi $s4, $v1, 0xffff
label_0x1da1b8:
    s5 = s4 & 0xffff;                                           // 0x001da1b8: andi $s5, $s4, 0xffff
    v1 = (s5 < s0) ? 1 : 0;                                     // 0x001da1bc: slt $v1, $s5, $s0
    if (v1 != 0) goto label_0x1da068;                           // 0x001da1c0: bnez $v1, 0x1da068
    a3 = s4 & 0xffff;                                           // 0x001da1c4: andi $a3, $s4, 0xffff
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001da1cc: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001da1d0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001da1d8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001da1dc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da1e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da1e4: jr $ra
    sp = sp + 0x190;                                            // 0x001da1e8: addiu $sp, $sp, 0x190
}