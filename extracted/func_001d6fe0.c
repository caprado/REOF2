void func_001d6fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x150;                                           // 0x001d6fe0: addiu $sp, $sp, -0x150
    at = 0x31 << 16;                                            // 0x001d6fe4: lui $at, 0x31
    a2 = 1;                                                     // 0x001d6fec: addiu $a2, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d6ff0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6ffc: addu.qb $zero, $sp, $s1
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001d7008: lw $s2, 0x37fc($at)
    a0 = 0x24 << 16;                                            // 0x001d7010: lui $a0, 0x24
    a0 = &str_002474d0;  // "data/rom/scene/item_msg/pit_s%03d.dat" // 0x001d7014: addiu $a0, $a0, 0x74d0
    at = 0x31 << 16;                                            // 0x001d7018: lui $at, 0x31
    func_001d33e0();  // 0x1d3390                                // 0x001d7020: jal 0x1d3390
    g_0031386c = s0;  // Global at 0x0031386c                   // 0x001d7024: sw $s0, 0x386c($at)
    if (v0 == 0) goto label_0x1d708c;                           // 0x001d7028: beqz $v0, 0x1d708c
    /* nop */                                                   // 0x001d702c: nop 
    v0 = *(int32_t*)((s2) + 4);                                 // 0x001d7030: lw $v0, 4($s2)
    a1 = s2 + 8;                                                // 0x001d7034: addiu $a1, $s2, 8
    goto label_0x1d704c;                                        // 0x001d703c: b 0x1d704c
    v1 = v0 + -1;                                               // 0x001d7040: addiu $v1, $v0, -1
label_0x1d7044:
    a1 = a1 + 8;                                                // 0x001d7044: addiu $a1, $a1, 8
    a0 = a0 + 1;                                                // 0x001d7048: addiu $a0, $a0, 1
label_0x1d704c:
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001d704c: slt $v0, $a0, $v1
    /* nop */                                                   // 0x001d7050: nop 
    /* nop */                                                   // 0x001d7054: nop 
    if (v0 != 0) goto label_0x1d7044;                           // 0x001d7058: bnez $v0, 0x1d7044
    /* nop */                                                   // 0x001d705c: nop 
    s3 = g_00247514;  // Global at 0x00247514                   // 0x001d7060: lw $s3, 4($a1)
    v0 = g_00247510;  // Global at 0x00247510                   // 0x001d7068: lw $v0, 0($a1)
    s1 = s1 + s3;                                               // 0x001d7070: addu $s1, $s1, $s3
    func_00107b68();  // 0x107ab8                                // 0x001d7074: jal 0x107ab8
    a1 = s2 + v0;                                               // 0x001d7078: addu $a1, $s2, $v0
    v1 = s3 + s0;                                               // 0x001d707c: addu $v1, $s3, $s0
    v0 = -0x40;                                                 // 0x001d7080: addiu $v0, $zero, -0x40
    v1 = v1 + 0x3f;                                             // 0x001d7084: addiu $v1, $v1, 0x3f
    s0 = v1 & v0;                                               // 0x001d7088: and $s0, $v1, $v0
label_0x1d708c:
    at = 0x31 << 16;                                            // 0x001d708c: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d7090: lui $a1, 0x24
    g_00313868 = s0;  // Global at 0x00313868                   // 0x001d7094: sw $s0, 0x3868($at)
    a0 = sp + 0x50;                                             // 0x001d7098: addiu $a0, $sp, 0x50
    at = 0x31 << 16;                                            // 0x001d709c: lui $at, 0x31
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d70a0: lhu $a2, 0x37ba($at)
    func_0010a570();  // 0x10a4d8                                // 0x001d70a4: jal 0x10a4d8
    a1 = &str_00247500;  // "objS%02d"                          // 0x001d70a8: addiu $a1, $a1, 0x7500
    v0 = 1 << 16;                                               // 0x001d70ac: lui $v0, 1
    a0 = sp + 0x50;                                             // 0x001d70b0: addiu $a0, $sp, 0x50
    func_001d33e0();  // 0x1d3390                                // 0x001d70bc: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d70c0: ori $a2, $v0, 1
    if (v0 != 0) goto label_0x1d70d4;                           // 0x001d70c4: bnez $v0, 0x1d70d4
    a1 = s2 + 8;                                                // 0x001d70c8: addiu $a1, $s2, 8
    goto label_0x1d7110;                                        // 0x001d70cc: b 0x1d7110
label_0x1d70d4:
label_0x1d70d8:
    v1 = v1 + 1;                                                // 0x001d70d8: addiu $v1, $v1, 1
    a1 = a1 + 8;                                                // 0x001d70dc: addiu $a1, $a1, 8
    v0 = (v1 < 3) ? 1 : 0;                                      // 0x001d70e0: slti $v0, $v1, 3
    /* nop */                                                   // 0x001d70e4: nop 
    /* nop */                                                   // 0x001d70e8: nop 
    if (v0 != 0) goto label_0x1d70d8;                           // 0x001d70ec: bnez $v0, 0x1d70d8
    /* nop */                                                   // 0x001d70f0: nop 
    a2 = g_0024750c;  // Global at 0x0024750c                   // 0x001d70f4: lw $a2, 4($a1)
    v0 = g_00247508;  // Global at 0x00247508                   // 0x001d70fc: lw $v0, 0($a1)
    s1 = s1 + a2;                                               // 0x001d7100: addu $s1, $s1, $a2
    func_00107b68();  // 0x107ab8                                // 0x001d7104: jal 0x107ab8
    a1 = s2 + v0;                                               // 0x001d7108: addu $a1, $s2, $v0
label_0x1d7110:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d7118: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d711c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7120: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7124: jr $ra
    sp = sp + 0x150;                                            // 0x001d7128: addiu $sp, $sp, 0x150
}