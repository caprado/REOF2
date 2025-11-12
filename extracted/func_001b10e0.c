void func_001b10e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b10e0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b10ec: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x808);                             // 0x001b10f4: lw $v1, 0x808($a0)
    if (v1 == 0) goto label_0x1b11b4;                           // 0x001b10f8: beqz $v1, 0x1b11b4
    goto label_0x1b1164;                                        // 0x001b1100: b 0x1b1164
label_0x1b1108:
    v1 = *(int32_t*)((s2) + 0x808);                             // 0x001b1108: lw $v1, 0x808($s2)
    v0 = s1 << 3;                                               // 0x001b110c: sll $v0, $s1, 3
    a0 = v0 + s1;                                               // 0x001b1110: addu $a0, $v0, $s1
    a0 = a0 << 1;                                               // 0x001b1114: sll $a0, $a0, 1
    v0 = -1;                                                    // 0x001b1118: addiu $v0, $zero, -1
    a0 = a0 + s1;                                               // 0x001b111c: addu $a0, $a0, $s1
    s0 = a0 << 3;                                               // 0x001b1120: sll $s0, $a0, 3
    v1 = v1 + s0;                                               // 0x001b1124: addu $v1, $v1, $s0
    a0 = *(int32_t*)(v1);                                       // 0x001b1128: lw $a0, 0($v1)
    if (a0 == v0) goto label_0x1b1160;                          // 0x001b112c: beq $a0, $v0, 0x1b1160
    /* nop */                                                   // 0x001b1130: nop 
    if (a0 == 0) goto label_0x1b1160;                           // 0x001b1134: beqz $a0, 0x1b1160
    /* nop */                                                   // 0x001b1138: nop 
    func_0018c490();  // 0x18c350                                // 0x001b113c: jal 0x18c350
    /* nop */                                                   // 0x001b1140: nop 
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b1144: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b1148: addu $v0, $v0, $s0
    func_001b0df0();  // 0x1b0db0                                // 0x001b114c: jal 0x1b0db0
    a0 = *(int32_t*)(v0);                                       // 0x001b1150: lw $a0, 0($v0)
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b1154: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b1158: addu $v0, $v0, $s0
    *(uint32_t*)(v0) = 0;                                       // 0x001b115c: sw $zero, 0($v0)
label_0x1b1160:
    s1 = s1 + 1;                                                // 0x001b1160: addiu $s1, $s1, 1
label_0x1b1164:
    v0 = *(uint16_t*)((s2) + 0x812);                            // 0x001b1164: lhu $v0, 0x812($s2)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001b1168: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1b1108;                           // 0x001b116c: bnez $v0, 0x1b1108
    func_001b1870();  // 0x1b17c0                                // 0x001b1174: jal 0x1b17c0
    /* nop */                                                   // 0x001b1178: nop 
    func_001b17c0();  // 0x1b1700                                // 0x001b117c: jal 0x1b1700
    a0 = *(int32_t*)((s2) + 0x80c);                             // 0x001b1184: lw $a0, 0x80c($s2)
    if (a0 == 0) goto label_0x1b11a4;                           // 0x001b1188: beqz $a0, 0x1b11a4
    /* nop */                                                   // 0x001b118c: nop 
    func_00192350();  // 0x192330                                // 0x001b1190: jal 0x192330
    /* nop */                                                   // 0x001b1194: nop 
    func_001b0ec0();  // 0x1b0e80                                // 0x001b1198: jal 0x1b0e80
    a0 = *(int32_t*)((s2) + 0x80c);                             // 0x001b119c: lw $a0, 0x80c($s2)
    *(uint32_t*)((s2) + 0x80c) = 0;                             // 0x001b11a0: sw $zero, 0x80c($s2)
label_0x1b11a4:
    func_001b29e0();  // 0x1b28a0                                // 0x001b11a4: jal 0x1b28a0
    a0 = *(int32_t*)((s2) + 0x808);                             // 0x001b11a8: lw $a0, 0x808($s2)
    *(uint32_t*)((s2) + 0x808) = 0;                             // 0x001b11ac: sw $zero, 0x808($s2)
    *(uint16_t*)((s2) + 0x812) = 0;                             // 0x001b11b0: sh $zero, 0x812($s2)
label_0x1b11b4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b11b8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b11bc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b11c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b11c4: jr $ra
    sp = sp + 0x40;                                             // 0x001b11c8: addiu $sp, $sp, 0x40
}