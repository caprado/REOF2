void func_00192ed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00192ed0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00192edc: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00192ee4: swc1 $f20, 0($sp)
    a0 = *(int32_t*)((a0) + 0xd4);                              // 0x00192eec: lw $a0, 0xd4($a0)
    func_00192200();  // 192200                                // 0x00192ef0: jal 0x192200
    /* FPU: mov.s $f20, $f12 */                                 // 0x00192ef4: mov.s $f20, $f12
    v1 = *(uint16_t*)((s1) + 0xc6);                             // 0x00192ef8: lhu $v1, 0xc6($s1)
    v0 = s0 & 0xffff;                                           // 0x00192efc: andi $v0, $s0, 0xffff
    if (v1 != v0) goto label_0x192f70;                          // 0x00192f00: bne $v1, $v0, 0x192f70
label_0x192f08:
    v0 = a0 << 2;                                               // 0x00192f08: sll $v0, $a0, 2
    v1 = s1 + v0;                                               // 0x00192f0c: addu $v1, $s1, $v0
    a0 = a0 + 1;                                                // 0x00192f10: addiu $a0, $a0, 1
    FPU_F0 = *(float*)((v1) + 0xdc);  // Load float             // 0x00192f14: lwc1 $f0, 0xdc($v1)
    v0 = (a0 < 0xa) ? 1 : 0;                                    // 0x00192f18: slti $v0, $a0, 0xa
    if (v0 != 0) goto label_0x192f08;                           // 0x00192f1c: bnez $v0, 0x192f08
    *(float*)((v1) + 0x104) = FPU_F0;  // Store float           // 0x00192f20: swc1 $f0, 0x104($v1)
    v0 = *(int32_t*)((s1) + 0xd4);                              // 0x00192f24: lw $v0, 0xd4($s1)
    if (v0 == 0) goto label_0x192f54;                           // 0x00192f28: beqz $v0, 0x192f54
    a0 = s1 + 0x40;                                             // 0x00192f2c: addiu $a0, $s1, 0x40
    v1 = *(int32_t*)((s1) + 0xd8);                              // 0x00192f30: lw $v1, 0xd8($s1)
    a1 = s1 + 0xdc;                                             // 0x00192f34: addiu $a1, $s1, 0xdc
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00192f38: lw $v0, -0x64dc($gp)
    a2 = s1 + 0x104;                                            // 0x00192f3c: addiu $a2, $s1, 0x104
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192f40: mov.s $f12, $f20
    a3 = s1 + 0x15c;                                            // 0x00192f44: addiu $a3, $s1, 0x15c
    func_00193d00();  // 193d00                                // 0x00192f48: jal 0x193d00
    a0 = v1 + v0;                                               // 0x00192f4c: addu $a0, $v1, $v0
    a0 = s1 + 0x40;                                             // 0x00192f50: addiu $a0, $s1, 0x40
label_0x192f54:
    func_00193a20();  // 193a20                                // 0x00192f54: jal 0x193a20
    a1 = s1 + 0x104;                                            // 0x00192f58: addiu $a1, $s1, 0x104
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x00192f5c: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x192f70;                           // 0x00192f60: beqz $a0, 0x192f70
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192f64: mov.s $f12, $f20
    func_00192ed0();  // 192ed0                                // 0x00192f68: jal 0x192ed0
label_0x192f70:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x00192f70: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x192f84;                           // 0x00192f74: beqz $a0, 0x192f84
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192f78: mov.s $f12, $f20
    func_00192ed0();  // 192ed0                                // 0x00192f7c: jal 0x192ed0
label_0x192f84:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00192f88: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00192f8c: ld.b $w0, -0x4f($zero)
    v0 = 1;                                                     // 0x00192f90: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00192f94: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00192f98: jr $ra
    sp = sp + 0x40;                                             // 0x00192f9c: addiu $sp, $sp, 0x40
}