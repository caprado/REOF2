/** @category: network/init @status: complete @author: caprado */
// Network bio init - loads "netbio00.dat"
void func_001baa30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x001baa30: addiu $sp, $sp, -0xc0
    a1 = 0x22 << 16;                                            // 0x001baa34: lui $a1, 0x22
    v1 = sp + 0xb8;                                             // 0x001baa3c: addiu $v1, $sp, 0xb8
    a0 = sp + 0x40;                                             // 0x001baa44: addiu $a0, $sp, 0x40
    FPU_F0 = *(float*)((gp) + -0x7cb8);  // Load float          // 0x001baa48: lwc1 $f0, -0x7cb8($gp)
    v0 = *(uint8_t*)((gp) + -0x7cb4);                           // 0x001baa4c: lbu $v0, -0x7cb4($gp)
    a1 = &str_0021cb18;  // "16:24:06"                          // 0x001baa50: addiu $a1, $a1, -0x34e8
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x001baa54: swc1 $f0, 0($v1)
    func_0010ac68();  // 10ac68                                // 0x001baa58: jal 0x10ac68
    *(uint8_t*)((v1) + 4) = v0;                                 // 0x001baa5c: sb $v0, 4($v1)
    a1 = 0x22 << 16;                                            // 0x001baa60: lui $a1, 0x22
    a0 = sp + 0x20;                                             // 0x001baa64: addiu $a0, $sp, 0x20
    func_0010ac68();  // 10ac68                                // 0x001baa68: jal 0x10ac68
    a1 = &str_0021cb28;  // "send \\"                           // 0x001baa6c: addiu $a1, $a1, -0x34d8
    a0 = sp + 0x40;                                             // 0x001baa70: addiu $a0, $sp, 0x40
    func_0010c4a0();  // 10c4a0                                // 0x001baa74: jal 0x10c4a0
    a1 = sp + 0xb8;                                             // 0x001baa78: addiu $a1, $sp, 0xb8
    func_0010ac68();  // 10ac68                                // 0x001baa80: jal 0x10ac68
    a0 = sp + 0xa8;                                             // 0x001baa84: addiu $a0, $sp, 0xa8
    func_0010c4a0();  // 10c4a0                                // 0x001baa8c: jal 0x10c4a0
    a1 = sp + 0xb8;                                             // 0x001baa90: addiu $a1, $sp, 0xb8
    func_0010ac68();  // 10ac68                                // 0x001baa98: jal 0x10ac68
    a0 = sp + 0xa0;                                             // 0x001baa9c: addiu $a0, $sp, 0xa0
    func_0010c4a0();  // 10c4a0                                // 0x001baaa4: jal 0x10c4a0
    a1 = sp + 0xb8;                                             // 0x001baaa8: addiu $a1, $sp, 0xb8
    func_0010ac68();  // 10ac68                                // 0x001baab0: jal 0x10ac68
    a0 = sp + 0xb0;                                             // 0x001baab4: addiu $a0, $sp, 0xb0
    a0 = sp + 0x88;                                             // 0x001baab8: addiu $a0, $sp, 0x88
    func_0010ac68();  // 10ac68                                // 0x001baabc: jal 0x10ac68
    a1 = sp + 0xb2;                                             // 0x001baac0: addiu $a1, $sp, 0xb2
    goto label_0x1bab08;                                        // 0x001baac4: b 0x1bab08
label_0x1baacc:
    v1 = s0 << 2;                                               // 0x001baacc: sll $v1, $s0, 2
    v0 = v0 + -0x34c0;                                          // 0x001baad0: addiu $v0, $v0, -0x34c0
    v0 = v0 + v1;                                               // 0x001baad4: addu $v0, $v0, $v1
    a0 = g_0021cb40;  // Global at 0x0021cb40                   // 0x001baad8: lw $a0, 0($v0)
    func_0010ab20();  // 10ab20                                // 0x001baadc: jal 0x10ab20
    a1 = sp + 0xa8;                                             // 0x001baae0: addiu $a1, $sp, 0xa8
    if (v0 != 0) goto label_0x1bab04;                           // 0x001baae4: bnez $v0, 0x1bab04
    a1 = 0x24 << 16;                                            // 0x001baae8: lui $a1, 0x24
    a2 = s0 + 1;                                                // 0x001baaec: addiu $a2, $s0, 1
    a0 = sp + 0x80;                                             // 0x001baaf0: addiu $a0, $sp, 0x80
    func_0010a4d8();  // 10a4d8                                // 0x001baaf4: jal 0x10a4d8
    a1 = a1 + -0x21e0;                                          // 0x001baaf8: addiu $a1, $a1, -0x21e0
    goto label_0x1bab18;                                        // 0x001baafc: b 0x1bab18
    a0 = sp + 0xa0;                                             // 0x001bab00: addiu $a0, $sp, 0xa0
label_0x1bab04:
    s0 = s0 + 1;                                                // 0x001bab04: addiu $s0, $s0, 1
label_0x1bab08:
    v0 = (s0 < 0xc) ? 1 : 0;                                    // 0x001bab08: slti $v0, $s0, 0xc
    if (v0 != 0) goto label_0x1baacc;                           // 0x001bab0c: bnez $v0, 0x1baacc
    v0 = 0x22 << 16;                                            // 0x001bab10: lui $v0, 0x22
    a0 = sp + 0xa0;                                             // 0x001bab14: addiu $a0, $sp, 0xa0
label_0x1bab18:
    func_0010ae00();  // 10ae00                                // 0x001bab18: jal 0x10ae00
    /* nop */                                                   // 0x001bab1c: nop 
    v1 = 1;                                                     // 0x001bab20: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1bab48;                          // 0x001bab24: bne $v0, $v1, 0x1bab48
    a1 = 0x24 << 16;                                            // 0x001bab28: lui $a1, 0x24
    a1 = 0x24 << 16;                                            // 0x001bab2c: lui $a1, 0x24
    a0 = sp + 0x78;                                             // 0x001bab30: addiu $a0, $sp, 0x78
    a1 = a1 + -0x21d8;                                          // 0x001bab34: addiu $a1, $a1, -0x21d8
    func_0010a4d8();  // 10a4d8                                // 0x001bab38: jal 0x10a4d8
    a2 = sp + 0xa0;                                             // 0x001bab3c: addiu $a2, $sp, 0xa0
    goto label_0x1bab5c;                                        // 0x001bab40: b 0x1bab5c
    a0 = sp + 0x20;                                             // 0x001bab44: addiu $a0, $sp, 0x20
label_0x1bab48:
    a0 = sp + 0x78;                                             // 0x001bab48: addiu $a0, $sp, 0x78
    a1 = a1 + -0x21d0;                                          // 0x001bab4c: addiu $a1, $a1, -0x21d0
    func_0010a4d8();  // 10a4d8                                // 0x001bab50: jal 0x10a4d8
    a2 = sp + 0xa0;                                             // 0x001bab54: addiu $a2, $sp, 0xa0
    a0 = sp + 0x20;                                             // 0x001bab58: addiu $a0, $sp, 0x20
label_0x1bab5c:
    func_0010c4a0();  // 10c4a0                                // 0x001bab5c: jal 0x10c4a0
    a1 = sp + 0xb8;                                             // 0x001bab60: addiu $a1, $sp, 0xb8
    func_0010ac68();  // 10ac68                                // 0x001bab68: jal 0x10ac68
    a0 = sp + 0x98;                                             // 0x001bab6c: addiu $a0, $sp, 0x98
    func_0010c4a0();  // 10c4a0                                // 0x001bab74: jal 0x10c4a0
    a1 = sp + 0xb8;                                             // 0x001bab78: addiu $a1, $sp, 0xb8
    func_0010ac68();  // 10ac68                                // 0x001bab80: jal 0x10ac68
    a0 = sp + 0x90;                                             // 0x001bab84: addiu $a0, $sp, 0x90
    a1 = 0x24 << 16;                                            // 0x001bab88: lui $a1, 0x24
    a0 = sp + 0x70;                                             // 0x001bab8c: addiu $a0, $sp, 0x70
    a1 = a1 + -0x21d0;                                          // 0x001bab90: addiu $a1, $a1, -0x21d0
    func_0010a4d8();  // 10a4d8                                // 0x001bab94: jal 0x10a4d8
    a2 = sp + 0x98;                                             // 0x001bab98: addiu $a2, $sp, 0x98
    a1 = 0x24 << 16;                                            // 0x001bab9c: lui $a1, 0x24
    a0 = sp + 0x68;                                             // 0x001baba0: addiu $a0, $sp, 0x68
    a1 = a1 + -0x21d0;                                          // 0x001baba4: addiu $a1, $a1, -0x21d0
    func_0010a4d8();  // 10a4d8                                // 0x001baba8: jal 0x10a4d8
    a2 = sp + 0x90;                                             // 0x001babac: addiu $a2, $sp, 0x90
    a0 = 0x30 << 16;                                            // 0x001babb0: lui $a0, 0x30
    a1 = 0x24 << 16;                                            // 0x001babb4: lui $a1, 0x24
    a0 = a0 + 0x7fb0;                                           // 0x001babb8: addiu $a0, $a0, 0x7fb0
    a1 = &str_0023de38;  // "netbio00.dat"                      // 0x001babbc: addiu $a1, $a1, -0x21c8
    a2 = sp + 0x88;                                             // 0x001babc0: addiu $a2, $sp, 0x88
    a3 = sp + 0x80;                                             // 0x001babc4: addiu $a3, $sp, 0x80
    t0 = sp + 0x78;                                             // 0x001babc8: addiu $t0, $sp, 0x78
    t1 = sp + 0x70;                                             // 0x001babcc: addiu $t1, $sp, 0x70
    func_0010a4d8();  // 10a4d8                                // 0x001babd0: jal 0x10a4d8
    t2 = sp + 0x68;                                             // 0x001babd4: addiu $t2, $sp, 0x68
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001babdc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001babe0: jr $ra
    sp = sp + 0xc0;                                             // 0x001babe4: addiu $sp, $sp, 0xc0
}