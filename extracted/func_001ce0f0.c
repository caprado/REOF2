void func_001ce0f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ce0f0: addiu $sp, $sp, -0x30
    v1 = a0 & 0xff;                                             // 0x001ce0f4: andi $v1, $a0, 0xff
    v0 = 4;                                                     // 0x001ce0fc: addiu $v0, $zero, 4
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ce100: addu.qb $zero, $sp, $s1
    if (v1 != v0) goto label_0x1ce1c0;                          // 0x001ce108: bne $v1, $v0, 0x1ce1c0
    s1 = 1;                                                     // 0x001ce10c: addiu $s1, $zero, 1
    at = 0x32 << 16;                                            // 0x001ce110: lui $at, 0x32
    v1 = 0x32 << 16;                                            // 0x001ce114: lui $v1, 0x32
    t1 = g_003257fc;  // Global at 0x003257fc                   // 0x001ce118: lbu $t1, 0x57fc($at)
    at = 0x32 << 16;                                            // 0x001ce124: lui $at, 0x32
    t0 = g_003257d5;  // Global at 0x003257d5                   // 0x001ce128: lbu $t0, 0x57d5($at)
    goto label_0x1ce170;                                        // 0x001ce12c: b 0x1ce170
    v1 = v1 + 0x57d0;                                           // 0x001ce130: addiu $v1, $v1, 0x57d0
label_0x1ce134:
    v0 = v0 - a1;                                               // 0x001ce134: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001ce138: sll $v0, $v0, 2
    a0 = v1 + v0;                                               // 0x001ce13c: addu $a0, $v1, $v0
    v0 = *(uint8_t*)((a0) + 0x4c);                              // 0x001ce140: lbu $v0, 0x4c($a0)
    if (v0 == 0) goto label_0x1ce16c;                           // 0x001ce144: beqz $v0, 0x1ce16c
    /* nop */                                                   // 0x001ce148: nop 
    v0 = *(uint8_t*)((a0) + 0x4e);                              // 0x001ce14c: lbu $v0, 0x4e($a0)
    v0 = (v0 < t1) ? 1 : 0;                                     // 0x001ce150: slt $v0, $v0, $t1
    if (v0 != 0) goto label_0x1ce16c;                           // 0x001ce154: bnez $v0, 0x1ce16c
    /* nop */                                                   // 0x001ce158: nop 
    v0 = *(int32_t*)((a0) + 0x50);                              // 0x001ce15c: lw $v0, 0x50($a0)
    if (v0 == 0) goto label_0x1ce16c;                           // 0x001ce160: beqz $v0, 0x1ce16c
    /* nop */                                                   // 0x001ce164: nop 
    s0 = s0 + 1;                                                // 0x001ce168: addiu $s0, $s0, 1
label_0x1ce16c:
    a1 = a1 + 1;                                                // 0x001ce16c: addiu $a1, $a1, 1
label_0x1ce170:
    v0 = (a1 < t0) ? 1 : 0;                                     // 0x001ce170: slt $v0, $a1, $t0
    if (v0 != 0) goto label_0x1ce134;                           // 0x001ce174: bnez $v0, 0x1ce134
    v0 = a1 << 4;                                               // 0x001ce178: sll $v0, $a1, 4
    a3 = 0x24 << 16;                                            // 0x001ce17c: lui $a3, 0x24
    t3 = t0 - t1;                                               // 0x001ce180: subu $t3, $t0, $t1
    a0 = 1;                                                     // 0x001ce184: addiu $a0, $zero, 1
    a1 = 7;                                                     // 0x001ce188: addiu $a1, $zero, 7
    a3 = &str_00243950;  // "Conexant"                          // 0x001ce190: addiu $a3, $a3, 0x3950
    func_001d09d0();  // 1d09d0                                // 0x001ce194: jal 0x1d09d0
    at = 0x32 << 16;                                            // 0x001ce19c: lui $at, 0x32
    v1 = g_003257d5;  // Global at 0x003257d5                   // 0x001ce1a0: lbu $v1, 0x57d5($at)
    at = 0x32 << 16;                                            // 0x001ce1a4: lui $at, 0x32
    v0 = g_003257fc;  // Global at 0x003257fc                   // 0x001ce1a8: lbu $v0, 0x57fc($at)
    v0 = v1 - v0;                                               // 0x001ce1ac: subu $v0, $v1, $v0
    if (s0 == v0) goto label_0x1ce220;                          // 0x001ce1b0: beq $s0, $v0, 0x1ce220
    goto label_0x1ce21c;                                        // 0x001ce1b8: b 0x1ce21c
label_0x1ce1c0:
    at = 0x32 << 16;                                            // 0x001ce1c0: lui $at, 0x32
    a3 = s1 << v1;                                              // 0x001ce1c4: sllv $a3, $s1, $v1
    a2 = g_003257d5;  // Global at 0x003257d5                   // 0x001ce1c8: lbu $a2, 0x57d5($at)
    v1 = 0x32 << 16;                                            // 0x001ce1cc: lui $v1, 0x32
    goto label_0x1ce210;                                        // 0x001ce1d4: b 0x1ce210
    v1 = v1 + 0x57d0;                                           // 0x001ce1d8: addiu $v1, $v1, 0x57d0
label_0x1ce1dc:
    v0 = v0 - a0;                                               // 0x001ce1dc: subu $v0, $v0, $a0
    v0 = v0 << 2;                                               // 0x001ce1e0: sll $v0, $v0, 2
    a1 = v1 + v0;                                               // 0x001ce1e4: addu $a1, $v1, $v0
    v0 = *(uint8_t*)((a1) + 0x4c);                              // 0x001ce1e8: lbu $v0, 0x4c($a1)
    if (v0 == 0) goto label_0x1ce20c;                           // 0x001ce1ec: beqz $v0, 0x1ce20c
    /* nop */                                                   // 0x001ce1f0: nop 
    v0 = *(uint8_t*)((a1) + 0x4d);                              // 0x001ce1f4: lbu $v0, 0x4d($a1)
    v0 = v0 & a3;                                               // 0x001ce1f8: and $v0, $v0, $a3
    if (v0 != 0) goto label_0x1ce20c;                           // 0x001ce1fc: bnez $v0, 0x1ce20c
    /* nop */                                                   // 0x001ce200: nop 
    goto label_0x1ce21c;                                        // 0x001ce204: b 0x1ce21c
label_0x1ce20c:
    a0 = a0 + 1;                                                // 0x001ce20c: addiu $a0, $a0, 1
label_0x1ce210:
    v0 = (a0 < a2) ? 1 : 0;                                     // 0x001ce210: slt $v0, $a0, $a2
    if (v0 != 0) goto label_0x1ce1dc;                           // 0x001ce214: bnez $v0, 0x1ce1dc
    v0 = a0 << 4;                                               // 0x001ce218: sll $v0, $a0, 4
label_0x1ce21c:
label_0x1ce220:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ce224: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce228: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce22c: jr $ra
    sp = sp + 0x30;                                             // 0x001ce230: addiu $sp, $sp, 0x30
}