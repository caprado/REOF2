/** @category: core/init @status: complete @author: caprado */
void func_00100e38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00100e38: addiu $sp, $sp, -0x20
    if (a0 != 0) goto label_0x100e88;                           // 0x00100e40: bnez $a0, 0x100e88
    v0 = 0x1f << 16;                                            // 0x00100e48: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100e4c: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100e60;                           // 0x00100e50: blez $v1, 0x100e60
    a0 = 0x22 << 16;                                            // 0x00100e54: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00100e58: jal 0x116508
    a0 = &str_0021fde8;  // "Scmd fail sema cur_cmd:%d keep_cmd:%d\n" // 0x00100e5c: addiu $a0, $a0, -0x218
label_0x100e60:
    goto label_0x100e70;                                        // 0x00100e60: b 0x100e70
    s0 = 0x1f << 16;                                            // 0x00100e64: lui $s0, 0x1f
label_0x100e68:
    func_00115340();  // 115340                                // 0x00100e68: jal 0x115340
    a0 = 0xfa0;                                                 // 0x00100e6c: addiu $a0, $zero, 0xfa0
label_0x100e70:
    func_001178a0();  // 1178a0                                // 0x00100e70: jal 0x1178a0
    a0 = s0 + -0x580;                                           // 0x00100e74: addiu $a0, $s0, -0x580
    if (v0 != 0) goto label_0x100e68;                           // 0x00100e78: bnez $v0, 0x100e68
    goto label_0x100e98;                                        // 0x00100e80: b 0x100e98
label_0x100e88:
    a0 = 0x1f << 16;                                            // 0x00100e88: lui $a0, 0x1f
    func_001178a0();  // 1178a0                                // 0x00100e8c: jal 0x1178a0
    a0 = a0 + -0x580;                                           // 0x00100e90: addiu $a0, $a0, -0x580
label_0x100e98:
    return;                                                     // 0x00100e9c: jr $ra
    sp = sp + 0x20;                                             // 0x00100ea0: addiu $sp, $sp, 0x20
}