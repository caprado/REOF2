void func_00139458() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00139458: addiu $sp, $sp, -0x30
    s3 = 0x20 << 16;                                            // 0x00139460: lui $s3, 0x20
    func_00141e50();  // 141e50                                // 0x00139474: jal 0x141e50
    a0 = s3 + 0x31f0;                                           // 0x00139478: addiu $a0, $s3, 0x31f0
    if (v0 == 0) goto label_0x1394b4;                           // 0x0013947c: beqz $v0, 0x1394b4
    v0 = 0x20 << 16;                                            // 0x00139480: lui $v0, 0x20
    s2 = 1;                                                     // 0x00139484: addiu $s2, $zero, 1
    s0 = v0 + 0x3260;                                           // 0x00139488: addiu $s0, $v0, 0x3260
    s1 = 0x27;                                                  // 0x0013948c: addiu $s1, $zero, 0x27
label_0x139490:
    v0 = g_00203260;  // Global at 0x00203260                   // 0x00139490: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x1394a8;                          // 0x00139494: bnel $v0, $s2, 0x1394a8
    s1 = s1 + -1;                                               // 0x00139498: addiu $s1, $s1, -1
    func_00139390();  // 139390                                // 0x0013949c: jal 0x139390
    s1 = s1 + -1;                                               // 0x001394a4: addiu $s1, $s1, -1
label_0x1394a8:
    if (s1 >= 0) goto label_0x139490;                           // 0x001394a8: bgez $s1, 0x139490
    s0 = s0 + 0x48;                                             // 0x001394ac: addiu $s0, $s0, 0x48
    g_002031f0 = 0;  // Global at 0x002031f0                    // 0x001394b0: sw $zero, 0x31f0($s3)
label_0x1394b4:
    return;                                                     // 0x001394c8: jr $ra
    sp = sp + 0x30;                                             // 0x001394cc: addiu $sp, $sp, 0x30
}