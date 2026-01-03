/** @category: core/init @status: complete @author: caprado */
void func_00111f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x00111f90: addiu $sp, $sp, -0x30
    v0 = 3;                                                     // 0x00111f94: addiu $v0, $zero, 3
    v1 = (unsigned)a0 >> 0x1f;                                  // 0x00111f98: srl $v1, $a0, 0x1f
    local_0 = v0;                                               // 0x00111fa0: sw $v0, 0($sp)
    if (a0 != 0) goto label_0x111fb8;                           // 0x00111fa4: bnez $a0, 0x111fb8
    local_4 = v1;                                               // 0x00111fa8: sw $v1, 4($sp)
    v0 = 2;                                                     // 0x00111fac: addiu $v0, $zero, 2
    goto label_0x112034;                                        // 0x00111fb0: b 0x112034
    local_0 = v0;                                               // 0x00111fb4: sw $v0, 0($sp)
label_0x111fb8:
    v0 = 0x3c;                                                  // 0x00111fb8: addiu $v0, $zero, 0x3c
    if (v1 == 0) goto label_0x111fe8;                           // 0x00111fbc: beqz $v1, 0x111fe8
    local_8 = v0;                                               // 0x00111fc0: sw $v0, 8($sp)
    v1 = 0x8000 << 16;                                          // 0x00111fc4: lui $v1, 0x8000
    v0 = 0 | 0xc1e0;                                            // 0x00111fc8: ori $v0, $zero, 0xc1e0
    if (a0 == v1) goto label_0x112040;                          // 0x00111fd0: beq $a0, $v1, 0x112040
    v0 = -a0;                                                   // 0x00111fd8: negu $v0, $a0
    goto label_0x111fec;                                        // 0x00111fdc: b 0x111fec
    /* nop */                                                   // 0x00111fe4: nop 
label_0x111fe8:
label_0x111fec:
    v0 = -1;                                                    // 0x00111ff0: addiu $v0, $zero, -1
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x00111ff8: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x112034;                           // 0x00111ffc: bnez $v0, 0x112034
    a1 = local_8;                                               // 0x00112000: lw $a1, 8($sp)
    a2 = -1;                                                    // 0x00112004: addiu $a2, $zero, -1
    /* nop */                                                   // 0x0011200c: nop 
label_0x112010:
    a1 = a1 + -1;                                               // 0x00112014: addiu $a1, $a1, -1
    v0 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x00112018: sltu $v0, $a2, $v1
    /* nop */                                                   // 0x0011201c: nop 
    /* nop */                                                   // 0x00112020: nop 
    if (v0 == 0) goto label_0x112010;                           // 0x00112024: beqz $v0, 0x112010
    local_8 = a1;                                               // 0x0011202c: sw $a1, 8($sp)
label_0x112034:
    func_00111678();  // 0x1115a0                                // 0x00112034: jal 0x1115a0
label_0x112040:
    return;                                                     // 0x00112040: jr $ra
    sp = sp + 0x30;                                             // 0x00112044: addiu $sp, $sp, 0x30
}