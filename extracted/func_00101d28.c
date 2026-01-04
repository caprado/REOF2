/** @category system/ps2 @status complete @author caprado */
void func_00101d28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x00101d28: addiu $sp, $sp, -0x60
    a0 = 0xf;                                                   // 0x00101d3c: addiu $a0, $zero, 0xf
    func_00100ea8();  // 100ea8                                // 0x00101d44: jal 0x100ea8
    if (v0 != 0) goto label_0x101d5c;                           // 0x00101d4c: bnez $v0, 0x101d5c
    s3 = 0x1f << 16;                                            // 0x00101d50: lui $s3, 0x1f
    goto label_0x101e04;                                        // 0x00101d54: b 0x101e04
label_0x101d5c:
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00101d5c: lw $v0, -0x20f0($s3)
    if (v0 <= 0) goto label_0x101d70;                           // 0x00101d60: blez $v0, 0x101d70
    a0 = 0x22 << 16;                                            // 0x00101d64: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00101d68: jal 0x116508
    a0 = &str_0021fef8;  // "Libcdvd call Clock read 2\n"       // 0x00101d6c: addiu $a0, $a0, -0x108
label_0x101d70:
    v0 = 0x1f << 16;                                            // 0x00101d70: lui $v0, 0x1f
    a0 = 0x1f << 16;                                            // 0x00101d74: lui $a0, 0x1f
    s0 = v0 + -0xf00;                                           // 0x00101d78: addiu $s0, $v0, -0xf00
    a0 = a0 + -0x580;                                           // 0x00101d7c: addiu $a0, $a0, -0x580
    local_0 = 0;                                                // 0x00101d80: sw $zero, 0($sp)
    a1 = 1;                                                     // 0x00101d84: addiu $a1, $zero, 1
    t2 = 0x10;                                                  // 0x00101d98: addiu $t2, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x00101d9c: jal 0x1176a8
    if (v0 >= 0) goto label_0x101dc0;                           // 0x00101da4: bgezl $v0, 0x101dc0
    v0 = s0 + 4;                                                // 0x00101da8: addiu $v0, $s0, 4
    v0 = 0x1f << 16;                                            // 0x00101dac: lui $v0, 0x1f
    iSignalSema();  // 0x114300                                 // 0x00101db0: jal 0x114300
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101db4: lw $a0, -0x20d4($v0)
    goto label_0x101e04;                                        // 0x00101db8: b 0x101e04
label_0x101dc0:
    s1 = 0x2000 << 16;                                          // 0x00101dc0: lui $s1, 0x2000
    v0 = v0 | s1;                                               // 0x00101dc4: or $v0, $v0, $s1
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00101dd8: lw $v1, -0x20f0($s3)
    if (v1 <= 0) goto label_0x101dec;                           // 0x00101ddc: blez $v1, 0x101dec
    a0 = 0x22 << 16;                                            // 0x00101de0: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00101de4: jal 0x116508
    a0 = &str_0021ff18;  // "libdma: sync timeout\n"            // 0x00101de8: addiu $a0, $a0, -0xe8
label_0x101dec:
    v0 = 0x1f << 16;                                            // 0x00101dec: lui $v0, 0x1f
    v1 = s0 | s1;                                               // 0x00101df0: or $v1, $s0, $s1
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101df4: lw $a0, -0x20d4($v0)
    iSignalSema();  // 0x114300                                 // 0x00101df8: jal 0x114300
    s0 = *(int32_t*)(v1);                                       // 0x00101dfc: lw $s0, 0($v1)
label_0x101e04:
    return;                                                     // 0x00101e18: jr $ra
    sp = sp + 0x60;                                             // 0x00101e1c: addiu $sp, $sp, 0x60
}