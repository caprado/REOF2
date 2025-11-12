void func_00112418() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x00112418: addiu $sp, $sp, -0x140
    a0 = 0x22 << 16;                                            // 0x0011241c: lui $a0, 0x22
    a1 = 1;                                                     // 0x00112424: addiu $a1, $zero, 1
    a0 = &str_00220e38;  // "sceGsDefDispEnv:Not support displaymode for 0x%x!!\n" // 0x0011242c: addiu $a0, $a0, 0xe38
    func_001189b8();  // 0x118730                                // 0x00112434: jal 0x118730
    if (s2 >= 0) goto label_0x112450;                           // 0x00112440: bgez $s2, 0x112450
    goto label_0x1124a0;                                        // 0x00112448: b 0x1124a0
    v0 = -1;                                                    // 0x0011244c: addiu $v0, $zero, -1
label_0x112450:
    goto label_0x11245c;                                        // 0x00112450: b 0x11245c
label_0x112458:
    s1 = s1 + 1;                                                // 0x00112458: addiu $s1, $s1, 1
label_0x11245c:
    v0 = ((unsigned)s1 < (unsigned)0x100) ? 1 : 0;              // 0x0011245c: sltiu $v0, $s1, 0x100
    if (v0 == 0) goto label_0x112480;                           // 0x00112460: beqz $v0, 0x112480
    func_00118fd0();  // 0x118d70                                // 0x0011246c: jal 0x118d70
    a2 = 1;                                                     // 0x00112470: addiu $a2, $zero, 1
    v1 = *(int8_t*)(s0);                                        // 0x00112474: lb $v1, 0($s0)
    if (v1 != 0) goto label_0x112458;                           // 0x00112478: bnez $v1, 0x112458
    s0 = s0 + 1;                                                // 0x0011247c: addiu $s0, $s0, 1
label_0x112480:
    func_00118b38();  // 0x1189b8                                // 0x00112480: jal 0x1189b8
    a0 = s1 + -9;                                               // 0x00112488: addiu $a0, $s1, -9
    func_001037b0();  // 0x103788                                // 0x0011248c: jal 0x103788
    a0 = sp + a0;                                               // 0x00112490: addu $a0, $sp, $a0
    v1 = 0x131 << 16;                                           // 0x00112494: lui $v1, 0x131
    v1 = v1 | 0x5670;                                           // 0x00112498: ori $v1, $v1, 0x5670
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x0011249c: slt $v0, $v1, $v0
label_0x1124a0:
    return;                                                     // 0x001124b0: jr $ra
    sp = sp + 0x140;                                            // 0x001124b4: addiu $sp, $sp, 0x140
}