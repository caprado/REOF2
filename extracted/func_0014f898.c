void func_0014f898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0014f898: addiu $sp, $sp, -0x50
    s6 = s5 + 0x1000;                                           // 0x0014f8b4: addiu $s6, $s5, 0x1000
    func_00148f48();  // 0x148f00                                // 0x0014f8d0: jal 0x148f00
    s7 = s5 + 0x800;                                            // 0x0014f8d4: addiu $s7, $s5, 0x800
    s4 = 0 | 0xff80;                                            // 0x0014f8d8: ori $s4, $zero, 0xff80
    /* nop */                                                   // 0x0014f8e4: nop 
label_0x14f8e8:
    a0 = s3 + -0x80;                                            // 0x0014f8e8: addiu $a0, $s3, -0x80
    func_00112048();  // 0x111f90                                // 0x0014f8ec: jal 0x111f90
    s1 = s3 << 3;                                               // 0x0014f8f0: sll $s1, $s3, 3
    at = 0x22 << 16;                                            // 0x0014f8f4: lui $at, 0x22
    s0 = s1 + s7;                                               // 0x0014f900: addu $s0, $s1, $s7
    func_00111ce0();  // 0x111a58                                // 0x0014f908: jal 0x111a58
    s1 = s1 + s6;                                               // 0x0014f90c: addu $s1, $s1, $s6
    func_001119f0();  // 0x111998                                // 0x0014f918: jal 0x111998
    s3 = s3 + 1;                                                // 0x0014f91c: addiu $s3, $s3, 1
    func_001120e8();  // 0x112048                                // 0x0014f924: jal 0x112048
    /* nop */                                                   // 0x0014f928: nop 
    at = 0x22 << 16;                                            // 0x0014f930: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f938: jal 0x111a58
    *(uint16_t*)((s0) + 4) = v0;                                // 0x0014f93c: sh $v0, 4($s0)
    func_001119f0();  // 0x111998                                // 0x0014f944: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f94c: jal 0x112048
    *(uint16_t*)(s0) = 0;                                       // 0x0014f954: sh $zero, 0($s0)
    *(uint16_t*)((s0) + 2) = v0;                                // 0x0014f958: sh $v0, 2($s0)
    *(uint16_t*)((s0) + 6) = 0;                                 // 0x0014f960: sh $zero, 6($s0)
    at = 0x22 << 16;                                            // 0x0014f964: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f96c: jal 0x111a58
    *(uint16_t*)((s1) + 4) = 0;                                 // 0x0014f970: sh $zero, 4($s1)
    func_001119f0();  // 0x111998                                // 0x0014f978: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f980: jal 0x112048
    at = 0x22 << 16;                                            // 0x0014f98c: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f994: jal 0x111a58
    *(uint16_t*)((s1) + 2) = v0;                                // 0x0014f998: sh $v0, 2($s1)
    func_001119f0();  // 0x111998                                // 0x0014f9a0: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f9a8: jal 0x112048
    *(uint16_t*)((s1) + 6) = 0;                                 // 0x0014f9b0: sh $zero, 6($s1)
    v1 = (s3 < 0x100) ? 1 : 0;                                  // 0x0014f9b4: slti $v1, $s3, 0x100
    if (v1 != 0) goto label_0x14f8e8;                           // 0x0014f9b8: bnez $v1, 0x14f8e8
    *(uint16_t*)(s1) = v0;                                      // 0x0014f9bc: sh $v0, 0($s1)
    s3 = 0xf;                                                   // 0x0014f9c4: addiu $s3, $zero, 0xf
label_0x14f9c8:
    s3 = s3 + -1;                                               // 0x0014f9c8: addiu $s3, $s3, -1
    *(uint16_t*)((v0) + 4) = 0;                                 // 0x0014f9cc: sh $zero, 4($v0)
    *(uint16_t*)((v0) + 2) = 0;                                 // 0x0014f9d0: sh $zero, 2($v0)
    *(uint16_t*)(v0) = 0;                                       // 0x0014f9d4: sh $zero, 0($v0)
    *(uint16_t*)((v0) + 6) = 0;                                 // 0x0014f9d8: sh $zero, 6($v0)
    if (s3 >= 0) goto label_0x14f9c8;                           // 0x0014f9dc: bgez $s3, 0x14f9c8
    v0 = v0 + 8;                                                // 0x0014f9e0: addiu $v0, $v0, 8
    s4 = fp << 5;                                               // 0x0014f9e4: sll $s4, $fp, 5
    s2 = 0x70;                                                  // 0x0014f9e8: addiu $s2, $zero, 0x70
    s0 = s5 + 0x80;                                             // 0x0014f9ec: addiu $s0, $s5, 0x80
    s3 = 0x6f;                                                  // 0x0014f9f4: addiu $s3, $zero, 0x6f
label_0x14f9f8:
    /* divide: s1 / s2 -> hi:lo */                              // 0x0014f9f8: div $zero, $s1, $s2
    s1 = s1 + 0x100;                                            // 0x0014f9fc: addiu $s1, $s1, 0x100
    /* beqzl $s2, 0x14fa08 */                                   // 0x0014fa00: beqzl $s2, 0x14fa08
    /* break (trap) */                                          // 0x0014fa04: break 0, 7
    s3 = s3 + -1;                                               // 0x0014fa08: addiu $s3, $s3, -1
    /* mflo $a0 */                                              // 0x0014fa0c
    func_00112048();  // 0x111f90                                // 0x0014fa10: jal 0x111f90
    a0 = a0 + -0x10;                                            // 0x0014fa14: addiu $a0, $a0, -0x10
    at = 0x22 << 16;                                            // 0x0014fa18: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014fa20: jal 0x111a58
    a1 = 0 | 0xff80;                                            // 0x0014fa28: ori $a1, $zero, 0xff80
    func_001119f0();  // 0x111998                                // 0x0014fa30: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014fa38: jal 0x112048
    *(uint16_t*)((s0) + 6) = s4;                                // 0x0014fa40: sh $s4, 6($s0)
    v0 = v0 << 0x10;                                            // 0x0014fa44: sll $v0, $v0, 0x10
    v0 = v0 >> 0x10;                                            // 0x0014fa48: sra $v0, $v0, 0x10
    *(uint16_t*)(s0) = v0;                                      // 0x0014fa4c: sh $v0, 0($s0)
    *(uint16_t*)((s0) + 4) = v0;                                // 0x0014fa50: sh $v0, 4($s0)
    *(uint16_t*)((s0) + 2) = v0;                                // 0x0014fa54: sh $v0, 2($s0)
    if (s3 >= 0) goto label_0x14f9f8;                           // 0x0014fa58: bgez $s3, 0x14f9f8
    s0 = s0 + 8;                                                // 0x0014fa5c: addiu $s0, $s0, 8
    s4 = fp << 6;                                               // 0x0014fa60: sll $s4, $fp, 6
    v0 = 0x458d;                                                // 0x0014fa64: addiu $v0, $zero, 0x458d
    v1 = s5 + 0x400;                                            // 0x0014fa6c: addiu $v1, $s5, 0x400
    s3 = 0xf;                                                   // 0x0014fa70: addiu $s3, $zero, 0xf
    /* nop */                                                   // 0x0014fa74: nop 
label_0x14fa78:
    s3 = s3 + -1;                                               // 0x0014fa78: addiu $s3, $s3, -1
    *(uint16_t*)((v1) + 4) = v0;                                // 0x0014fa7c: sh $v0, 4($v1)
    *(uint16_t*)((v1) + 2) = v0;                                // 0x0014fa80: sh $v0, 2($v1)
    *(uint16_t*)(v1) = v0;                                      // 0x0014fa84: sh $v0, 0($v1)
    *(uint16_t*)((v1) + 6) = a0;                                // 0x0014fa88: sh $a0, 6($v1)
    if (s3 >= 0) goto label_0x14fa78;                           // 0x0014fa8c: bgez $s3, 0x14fa78
    v1 = v1 + 8;                                                // 0x0014fa90: addiu $v1, $v1, 8
    s0 = s5 + 0x480;                                            // 0x0014fa94: addiu $s0, $s5, 0x480
    s5 = 0xff;                                                  // 0x0014fa98: addiu $s5, $zero, 0xff
    s2 = 0x70;                                                  // 0x0014fa9c: addiu $s2, $zero, 0x70
    s3 = 0x6f;                                                  // 0x0014faa4: addiu $s3, $zero, 0x6f
label_0x14faa8:
    /* divide: s1 / s2 -> hi:lo */                              // 0x0014faa8: div $zero, $s1, $s2
    s1 = s1 + 0x100;                                            // 0x0014faac: addiu $s1, $s1, 0x100
    /* beqzl $s2, 0x14fab8 */                                   // 0x0014fab0: beqzl $s2, 0x14fab8
    /* break (trap) */                                          // 0x0014fab4: break 0, 7
    s3 = s3 + -1;                                               // 0x0014fab8: addiu $s3, $s3, -1
    /* mflo $a0 */                                              // 0x0014fabc
    a0 = s5 - a0;                                               // 0x0014fac0: subu $a0, $s5, $a0
    func_00112048();  // 0x111f90                                // 0x0014fac4: jal 0x111f90
    a0 = a0 + -0x10;                                            // 0x0014fac8: addiu $a0, $a0, -0x10
    at = 0x22 << 16;                                            // 0x0014facc: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014fad4: jal 0x111a58
    a1 = 0 | 0xff80;                                            // 0x0014fadc: ori $a1, $zero, 0xff80
    func_001119f0();  // 0x111998                                // 0x0014fae4: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014faec: jal 0x112048
    *(uint16_t*)((s0) + 6) = s4;                                // 0x0014faf4: sh $s4, 6($s0)
    v0 = v0 << 0x10;                                            // 0x0014faf8: sll $v0, $v0, 0x10
    v0 = v0 >> 0x10;                                            // 0x0014fafc: sra $v0, $v0, 0x10
    *(uint16_t*)(s0) = v0;                                      // 0x0014fb00: sh $v0, 0($s0)
    *(uint16_t*)((s0) + 4) = v0;                                // 0x0014fb04: sh $v0, 4($s0)
    *(uint16_t*)((s0) + 2) = v0;                                // 0x0014fb08: sh $v0, 2($s0)
    if (s3 >= 0) goto label_0x14faa8;                           // 0x0014fb0c: bgez $s3, 0x14faa8
    s0 = s0 + 8;                                                // 0x0014fb10: addiu $s0, $s0, 8
    return;                                                     // 0x0014fb3c: jr $ra
    sp = sp + 0x50;                                             // 0x0014fb40: addiu $sp, $sp, 0x50
}