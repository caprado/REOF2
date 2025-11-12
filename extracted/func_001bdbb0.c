void func_001bdbb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bdbb0: addiu $sp, $sp, -0x10
    func_001bdd30();  // 0x1bdd00                                // 0x001bdbb8: jal 0x1bdd00
    *(uint32_t*)((gp) + -0x632c) = 0;                           // 0x001bdbbc: sw $zero, -0x632c($gp)
    v1 = -0x13;                                                 // 0x001bdbc0: addiu $v1, $zero, -0x13
    if (v0 == v1) goto label_0x1bdbec;                          // 0x001bdbc4: beq $v0, $v1, 0x1bdbec
    v1 = -2;                                                    // 0x001bdbc8: addiu $v1, $zero, -2
    if (v0 == v1) goto label_0x1bdbe4;                          // 0x001bdbcc: beq $v0, $v1, 0x1bdbe4
    /* nop */                                                   // 0x001bdbd0: nop 
    if (v0 == 0) goto label_0x1bdbfc;                           // 0x001bdbd4: beqz $v0, 0x1bdbfc
    /* nop */                                                   // 0x001bdbd8: nop 
    goto label_0x1bdbf4;                                        // 0x001bdbdc: b 0x1bdbf4
    v0 = -0x63;                                                 // 0x001bdbe0: addiu $v0, $zero, -0x63
label_0x1bdbe4:
    goto label_0x1bdc00;                                        // 0x001bdbe4: b 0x1bdc00
    v0 = -4;                                                    // 0x001bdbe8: addiu $v0, $zero, -4
label_0x1bdbec:
    goto label_0x1bdc00;                                        // 0x001bdbec: b 0x1bdc00
    v0 = -1;                                                    // 0x001bdbf0: addiu $v0, $zero, -1
label_0x1bdbf4:
    goto label_0x1bdc04;                                        // 0x001bdbf4: b 0x1bdc04
label_0x1bdbfc:
label_0x1bdc00:
label_0x1bdc04:
    return;                                                     // 0x001bdc04: jr $ra
    sp = sp + 0x10;                                             // 0x001bdc08: addiu $sp, $sp, 0x10
}