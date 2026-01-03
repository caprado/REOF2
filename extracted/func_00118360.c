void func_00118360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x00118360: lui $v0, 0x1f
    return iSignalSema();  // Tail call                         // 0x00118364: j 0x114300
    a0 = g_001f03e4;  // Global at 0x001f03e4                   // 0x00118368: lw $a0, 0x3e4($v0)
    /* nop */                                                   // 0x0011836c: nop 
    sp = sp + -0x60;                                            // 0x00118370: addiu $sp, $sp, -0x60
    a0 = 0x1b;                                                  // 0x0011838c: addiu $a0, $zero, 0x1b
    s0 = 0x25 << 16;                                            // 0x00118394: lui $s0, 0x25
    func_00118330();  // 118330                                // 0x0011839c: jal 0x118330
    s4 = s0 + -0x6c0;                                           // 0x001183a0: addiu $s4, $s0, -0x6c0
    v0 = 0x1f << 16;                                            // 0x001183a4: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x001183a8: lw $v1, 0x3dc($v0)
    if (v1 != 0) goto label_0x1183bc;                           // 0x001183ac: bnez $v1, 0x1183bc
    /* nop */                                                   // 0x001183b0: nop 
    func_00118460();  // 118460                                // 0x001183b4: jal 0x118460
    /* nop */                                                   // 0x001183b8: nop 
label_0x1183bc:
    func_0011d320();  // 11d320                                // 0x001183bc: jal 0x11d320
    /* nop */                                                   // 0x001183c0: nop 
    s1 = g_0024f940;  // Global at 0x0024f940                   // 0x001183c4: lw $s1, -0x6c0($s0)
    v1 = 0x25 << 16;                                            // 0x001183c8: lui $v1, 0x25
    g_0024f944 = s2;  // Global at 0x0024f944                   // 0x001183cc: sw $s2, 4($s4)
    g_0024f940 = s3;  // Global at 0x0024f940                   // 0x001183d0: sw $s3, -0x6c0($s0)
    g_0024f980 = gp;  // Global at 0x0024f980                   // 0x001183d4: sw $gp, -0x680($v1)
    if (v0 == 0) goto label_0x1183e8;                           // 0x001183d8: beqz $v0, 0x1183e8
    /* nop */                                                   // 0x001183dc: nop 
    func_0011d378();  // 11d378                                // 0x001183e0: jal 0x11d378
    /* nop */                                                   // 0x001183e4: nop 
label_0x1183e8:
    func_00118360();  // 118360                                // 0x001183e8: jal 0x118360
    /* nop */                                                   // 0x001183ec: nop 
    return;                                                     // 0x0011840c: jr $ra
    sp = sp + 0x60;                                             // 0x00118410: addiu $sp, $sp, 0x60
}