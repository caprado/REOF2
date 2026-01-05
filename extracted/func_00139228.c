void func_00139228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00139228: addiu $sp, $sp, -0x20
    s1 = 7;                                                     // 0x00139234: addiu $s1, $zero, 7
    func_0013ef18();  // 13ef18                                // 0x00139240: jal 0x13ef18
    s2 = 1;                                                     // 0x00139244: addiu $s2, $zero, 1
    v0 = 0x20 << 16;                                            // 0x00139248: lui $v0, 0x20
    s0 = v0 + 0x2a30;                                           // 0x0013924c: addiu $s0, $v0, 0x2a30
label_0x139250:
    v0 = g_00202a30;  // Global at 0x00202a30                   // 0x00139250: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x139268;                          // 0x00139254: bnel $v0, $s2, 0x139268
    s1 = s1 + -1;                                               // 0x00139258: addiu $s1, $s1, -1
    func_00138e58();  // 138e58                                // 0x0013925c: jal 0x138e58
    s1 = s1 + -1;                                               // 0x00139264: addiu $s1, $s1, -1
label_0x139268:
    if (s1 >= 0) goto label_0x139250;                           // 0x00139268: bgez $s1, 0x139250
    s0 = s0 + 0x44;                                             // 0x0013926c: addiu $s0, $s0, 0x44
    return func_0013ef80();  // Tail call                        // 0x00139280: j 0x13ef30
    sp = sp + 0x20;                                             // 0x00139284: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00139288: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x0013928c: lui $v0, 0x20
    v0 = v0 + 0x31e0;                                           // 0x00139294: addiu $v0, $v0, 0x31e0
    func_0013aad0();  // 13aad0                                // 0x0013929c: jal 0x13aad0
    v1 = g_002031e0;  // Global at 0x002031e0                   // 0x001392a0: lw $v1, 0($v0)
    v0 = 0x20 << 16;                                            // 0x001392a8: lui $v0, 0x20
    v0 = v0 + 0x31f8;                                           // 0x001392ac: addiu $v0, $v0, 0x31f8
    return;                                                     // 0x001392b0: jr $ra
    sp = sp + 0x10;                                             // 0x001392b4: addiu $sp, $sp, 0x10
}