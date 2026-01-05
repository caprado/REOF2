void func_001a1090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a1090: addiu $sp, $sp, -0x40
    v0 = 0 | 0xffff;                                            // 0x001a1094: ori $v0, $zero, 0xffff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a10a0: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x24);                              // 0x001a10a8: lw $v1, 0x24($a0)
    if (v1 != v0) goto label_0x1a10c4;                          // 0x001a10ac: bne $v1, $v0, 0x1a10c4
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001a10b4: lw $v0, 0x14($s1)
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001a10b8: sw $v0, 0x10($s1)
    goto label_0x1a1238;                                        // 0x001a10bc: b 0x1a1238
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x001a10c0: lw $v0, 0x10($s1)
label_0x1a10c4:
    a0 = v1 << 4;                                               // 0x001a10c4: sll $a0, $v1, 4
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x001a10c8: lw $v0, 0xc($s1)
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001a10cc: lw $v1, 8($s1)
    if (v0 == 0) goto label_0x1a11a0;                           // 0x001a10d0: beqz $v0, 0x1a11a0
    s0 = v1 + a0;                                               // 0x001a10d4: addu $s0, $v1, $a0
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001a10d8: lw $a0, 0x18($s1)
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001a10dc: lw $v1, 0x14($s1)
    a1 = *(int32_t*)(s0);                                       // 0x001a10e0: lw $a1, 0($s0)
    v0 = a0 + -1;                                               // 0x001a10e4: addiu $v0, $a0, -1
    v1 = v1 + a0;                                               // 0x001a10e8: addu $v1, $v1, $a0
    v0 = ~v0;                                                   // 0x001a10ec: not $v0, $v0
    v1 = v1 + -1;                                               // 0x001a10f0: addiu $v1, $v1, -1
    s2 = v0 & v1;                                               // 0x001a10f4: and $s2, $v0, $v1
    if (s2 == a1) goto label_0x1a1164;                          // 0x001a10f8: beq $s2, $a1, 0x1a1164
    /* nop */                                                   // 0x001a10fc: nop 
    a2 = *(int32_t*)((s0) + 4);                                 // 0x001a1100: lw $a2, 4($s0)
    func_001a5750();  // 1a5750                                // 0x001a1104: jal 0x1a5750
    goto label_0x1a1164;                                        // 0x001a110c: b 0x1a1164
    *(uint32_t*)(s0) = s2;                                      // 0x001a1110: sw $s2, 0($s0)
label_0x1a1114:
    v1 = v1 & 0xffff;                                           // 0x001a1114: andi $v1, $v1, 0xffff
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001a1118: lw $v0, 8($s1)
    a1 = v1 << 4;                                               // 0x001a111c: sll $a1, $v1, 4
    a0 = *(int32_t*)(s0);                                       // 0x001a1120: lw $a0, 0($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001a1124: lw $v1, 4($s0)
    a2 = *(int32_t*)((s1) + 0x18);                              // 0x001a1128: lw $a2, 0x18($s1)
    s0 = v0 + a1;                                               // 0x001a112c: addu $s0, $v0, $a1
    v1 = a0 + v1;                                               // 0x001a1130: addu $v1, $a0, $v1
    a1 = *(int32_t*)(s0);                                       // 0x001a1134: lw $a1, 0($s0)
    v0 = a2 + -1;                                               // 0x001a1138: addiu $v0, $a2, -1
    v1 = a2 + v1;                                               // 0x001a113c: addu $v1, $a2, $v1
    v0 = ~v0;                                                   // 0x001a1140: not $v0, $v0
    v1 = v1 + -1;                                               // 0x001a1144: addiu $v1, $v1, -1
    s2 = v0 & v1;                                               // 0x001a1148: and $s2, $v0, $v1
    if (s2 == a1) goto label_0x1a1164;                          // 0x001a114c: beq $s2, $a1, 0x1a1164
    /* nop */                                                   // 0x001a1150: nop 
    a2 = *(int32_t*)((s0) + 4);                                 // 0x001a1154: lw $a2, 4($s0)
    func_001a5750();  // 1a5750                                // 0x001a1158: jal 0x1a5750
    *(uint32_t*)(s0) = s2;                                      // 0x001a1160: sw $s2, 0($s0)
label_0x1a1164:
    v1 = *(uint16_t*)((s0) + 0xe);                              // 0x001a1164: lhu $v1, 0xe($s0)
    v0 = 0 | 0xffff;                                            // 0x001a1168: ori $v0, $zero, 0xffff
    if (v1 != v0) goto label_0x1a1114;                          // 0x001a116c: bne $v1, $v0, 0x1a1114
    /* nop */                                                   // 0x001a1170: nop 
    a0 = *(int32_t*)(s0);                                       // 0x001a1174: lw $a0, 0($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001a1178: lw $v1, 4($s0)
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x001a117c: lw $a1, 0x18($s1)
    v1 = a0 + v1;                                               // 0x001a1180: addu $v1, $a0, $v1
    v0 = a1 + -1;                                               // 0x001a1184: addiu $v0, $a1, -1
    v1 = a1 + v1;                                               // 0x001a1188: addu $v1, $a1, $v1
    v0 = ~v0;                                                   // 0x001a118c: not $v0, $v0
    v1 = v1 + -1;                                               // 0x001a1190: addiu $v1, $v1, -1
    v0 = v0 & v1;                                               // 0x001a1194: and $v0, $v0, $v1
    goto label_0x1a1234;                                        // 0x001a1198: b 0x1a1234
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001a119c: sw $v0, 0x10($s1)
label_0x1a11a0:
    v1 = *(int32_t*)((s1) + 0x18);                              // 0x001a11a0: lw $v1, 0x18($s1)
    a2 = *(int32_t*)((s0) + 4);                                 // 0x001a11a4: lw $a2, 4($s0)
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001a11a8: lw $v0, 0x14($s1)
    a1 = *(int32_t*)(s0);                                       // 0x001a11ac: lw $a1, 0($s0)
    v1 = v1 + -1;                                               // 0x001a11b0: addiu $v1, $v1, -1
    v1 = ~v1;                                                   // 0x001a11b4: not $v1, $v1
    v0 = v0 - a2;                                               // 0x001a11b8: subu $v0, $v0, $a2
    s2 = v1 & v0;                                               // 0x001a11bc: and $s2, $v1, $v0
    if (s2 == a1) goto label_0x1a121c;                          // 0x001a11c0: beq $s2, $a1, 0x1a121c
    func_001a5750();  // 1a5750                                // 0x001a11c8: jal 0x1a5750
    /* nop */                                                   // 0x001a11cc: nop 
    goto label_0x1a121c;                                        // 0x001a11d0: b 0x1a121c
    *(uint32_t*)(s0) = s2;                                      // 0x001a11d4: sw $s2, 0($s0)
label_0x1a11d8:
    v0 = *(int32_t*)(s0);                                       // 0x001a11d8: lw $v0, 0($s0)
    v1 = v1 & 0xffff;                                           // 0x001a11dc: andi $v1, $v1, 0xffff
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001a11e0: lw $a0, 8($s1)
    a1 = v1 << 4;                                               // 0x001a11e4: sll $a1, $v1, 4
    v1 = *(int32_t*)((s1) + 0x18);                              // 0x001a11e8: lw $v1, 0x18($s1)
    s0 = a0 + a1;                                               // 0x001a11ec: addu $s0, $a0, $a1
    a2 = *(int32_t*)((s0) + 4);                                 // 0x001a11f0: lw $a2, 4($s0)
    v1 = v1 + -1;                                               // 0x001a11f4: addiu $v1, $v1, -1
    a1 = *(int32_t*)(s0);                                       // 0x001a11f8: lw $a1, 0($s0)
    v1 = ~v1;                                                   // 0x001a11fc: not $v1, $v1
    v0 = v0 - a2;                                               // 0x001a1200: subu $v0, $v0, $a2
    s2 = v1 & v0;                                               // 0x001a1204: and $s2, $v1, $v0
    if (s2 == a1) goto label_0x1a121c;                          // 0x001a1208: beq $s2, $a1, 0x1a121c
    func_001a5750();  // 1a5750                                // 0x001a1210: jal 0x1a5750
    /* nop */                                                   // 0x001a1214: nop 
    *(uint32_t*)(s0) = s2;                                      // 0x001a1218: sw $s2, 0($s0)
label_0x1a121c:
    v1 = *(uint16_t*)((s0) + 0xe);                              // 0x001a121c: lhu $v1, 0xe($s0)
    v0 = 0 | 0xffff;                                            // 0x001a1220: ori $v0, $zero, 0xffff
    if (v1 != v0) goto label_0x1a11d8;                          // 0x001a1224: bne $v1, $v0, 0x1a11d8
    /* nop */                                                   // 0x001a1228: nop 
    v0 = *(int32_t*)(s0);                                       // 0x001a122c: lw $v0, 0($s0)
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001a1230: sw $v0, 0x10($s1)
label_0x1a1234:
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x001a1234: lw $v0, 0x10($s1)
label_0x1a1238:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a123c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a1240: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a1244: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a1248: jr $ra
    sp = sp + 0x40;                                             // 0x001a124c: addiu $sp, $sp, 0x40
}