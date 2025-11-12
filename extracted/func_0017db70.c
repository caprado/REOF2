void func_0017db70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017db70: addiu $sp, $sp, -0x20
    s0 = s2 + 0x200;                                            // 0x0017db80: addiu $s0, $s2, 0x200
    func_0017db20();  // 0x17d7b0                                // 0x0017db90: jal 0x17d7b0
    goto label_0x17dbc0;                                        // 0x0017dbb4: j 0x17dbc0
    sp = sp + 0x20;                                             // 0x0017dbb8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017dbbc: nop 
label_0x17dbc0:
    sp = sp + -0x60;                                            // 0x0017dbc0: addiu $sp, $sp, -0x60
    *(float*)((sp) + 0x58) = FPU_F21;  // Store float           // 0x0017dbf4: swc1 $f21, 0x58($sp)
    *(float*)((sp) + 0x50) = FPU_F20;  // Store float           // 0x0017dbf8: swc1 $f20, 0x50($sp)
    FPU_F21 = *(float*)((a0) + 0x40);  // Load float            // 0x0017dbfc: lwc1 $f21, 0x40($a0)
    func_0017e0c8();  // 0x17e068                                // 0x0017dc00: jal 0x17e068
    FPU_F20 = *(float*)((a0) + 0x3c);  // Load float            // 0x0017dc04: lwc1 $f20, 0x3c($a0)
    v1 = 1;                                                     // 0x0017dc08: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17dc48;                          // 0x0017dc0c: bne $v0, $v1, 0x17dc48
    /* nop */                                                   // 0x0017dc1c: nop 
label_0x17dc20:
    v0 = *(int32_t*)(a1);                                       // 0x0017dc20: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x0017dc24: addiu $a1, $a1, 4
    s4 = s4 + 1;                                                // 0x0017dc28: addiu $s4, $s4, 1
    v0 = (unsigned)v0 >> 0xf;                                   // 0x0017dc2c: srl $v0, $v0, 0xf
    v1 = (s4 < 0x100) ? 1 : 0;                                  // 0x0017dc30: slti $v1, $s4, 0x100
    *(uint16_t*)(a2) = v0;                                      // 0x0017dc34: sh $v0, 0($a2)
    if (v1 != 0) goto label_0x17dc20;                           // 0x0017dc38: bnez $v1, 0x17dc20
    a2 = a2 + 2;                                                // 0x0017dc3c: addiu $a2, $a2, 2
    goto label_0x17dd5c;                                        // 0x0017dc40: b 0x17dd5c
label_0x17dc48:
    at = 0x23 << 16;                                            // 0x0017dc48: lui $at, 0x23
    func_001115a0();  // 0x111560                                // 0x0017dc50: jal 0x111560
    /* FPU: mov.s $f12, $f20 */                                 // 0x0017dc54: mov.s $f12, $f20
    func_001115a0();  // 0x111560                                // 0x0017dc5c: jal 0x111560
    /* FPU: mov.s $f12, $f21 */                                 // 0x0017dc60: mov.s $f12, $f21
    func_00111a58();  // 0x1119f0                                // 0x0017dc70: jal 0x1119f0
    a0 = 0 | 0xffc0;                                            // 0x0017dc78: ori $a0, $zero, 0xffc0
    func_00111e20();  // 0x111ce0                                // 0x0017dc84: jal 0x111ce0
    s7 = 1;                                                     // 0x0017dc88: addiu $s7, $zero, 1
    func_00111ce0();  // 0x111a58                                // 0x0017dc98: jal 0x111a58
    s4 = 0xff;                                                  // 0x0017dc9c: addiu $s4, $zero, 0xff
    func_00111ce0();  // 0x111a58                                // 0x0017dca4: jal 0x111a58
    func_00111ce0();  // 0x111a58                                // 0x0017dcb4: jal 0x111a58
    func_00111ce0();  // 0x111a58                                // 0x0017dcc0: jal 0x111a58
    func_00111ce0();  // 0x111a58                                // 0x0017dccc: jal 0x111a58
label_0x17dcd8:
    s0 = *(int32_t*)(s3);                                       // 0x0017dcd8: lw $s0, 0($s3)
    if (s0 != 0) goto label_0x17dcec;                           // 0x0017dcdc: bnez $s0, 0x17dcec
    /* nop */                                                   // 0x0017dce0: nop 
    *(uint32_t*)(s3) = s7;                                      // 0x0017dce4: sw $s7, 0($s3)
label_0x17dcec:
    func_00112048();  // 0x111f90                                // 0x0017dcec: jal 0x111f90
    a1 = 0 | 0x83e0;                                            // 0x0017dcf4: ori $a1, $zero, 0x83e0
    if (s0 >= 0) goto label_0x17dd08;                           // 0x0017dcf8: bgez $s0, 0x17dd08
    func_001119f0();  // 0x111998                                // 0x0017dd00: jal 0x111998
label_0x17dd08:
    func_00111ce0();  // 0x111a58                                // 0x0017dd10: jal 0x111a58
    s4 = s4 + -1;                                               // 0x0017dd14: addiu $s4, $s4, -1
    at = 0x23 << 16;                                            // 0x0017dd18: lui $at, 0x23
    func_00111e20();  // 0x111ce0                                // 0x0017dd24: jal 0x111ce0
    s3 = s3 + 4;                                                // 0x0017dd28: addiu $s3, $s3, 4
    func_00111e20();  // 0x111ce0                                // 0x0017dd30: jal 0x111ce0
    func_00111a58();  // 0x1119f0                                // 0x0017dd3c: jal 0x1119f0
    func_00112210();  // 0x112170                                // 0x0017dd44: jal 0x112170
    *(uint16_t*)(s5) = v0;                                      // 0x0017dd4c: sh $v0, 0($s5)
    if (s4 >= 0) goto label_0x17dcd8;                           // 0x0017dd50: bgez $s4, 0x17dcd8
    s5 = s5 + 2;                                                // 0x0017dd54: addiu $s5, $s5, 2
label_0x17dd5c:
    FPU_F21 = *(float*)((sp) + 0x58);  // Load float            // 0x0017dd80: lwc1 $f21, 0x58($sp)
    FPU_F20 = *(float*)((sp) + 0x50);  // Load float            // 0x0017dd84: lwc1 $f20, 0x50($sp)
    return;                                                     // 0x0017dd88: jr $ra
    sp = sp + 0x60;                                             // 0x0017dd8c: addiu $sp, $sp, 0x60
}