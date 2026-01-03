void func_0013ffc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x50;                                            // 0x0013ffc0: addiu $sp, $sp, -0x50
    v0 = ((unsigned)s2 < (unsigned)4) ? 1 : 0;                  // 0x0013ffcc: sltiu $v0, $s2, 4
    if (v0 != 0) goto label_0x140018;                           // 0x0013ffe8: bnez $v0, 0x140018
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0013fff0: lw $v0, 0x28($s0)
    /* beqzl $v0, 0x14000c */                                   // 0x0013fff4: beqzl $v0, 0x14000c
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013fff8: sw $zero, 4($s1)
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013fffc: lw $a0, 0x2c($s0)
    /* call function at address in v0 */                        // 0x00140000: jalr $v0
    a1 = -3;                                                    // 0x00140004: addiu $a1, $zero, -3
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00140008: sw $zero, 4($s1)
    goto label_0x1400d8;                                        // 0x0014000c: b 0x1400d8
    *(uint32_t*)(s1) = 0;                                       // 0x00140010: sw $zero, 0($s1)
    /* nop */                                                   // 0x00140014: nop 
label_0x140018:
    func_0013ef18();  // 13ef18                                // 0x00140018: jal 0x13ef18
    /* nop */                                                   // 0x0014001c: nop 
    v0 = s2 << 2;                                               // 0x00140020: sll $v0, $s2, 2
    v0 = v0 + s0;                                               // 0x00140024: addu $v0, $v0, $s0
    a1 = v0 + 0x18;                                             // 0x00140028: addiu $a1, $v0, 0x18
    a0 = *(int32_t*)(a1);                                       // 0x0014002c: lw $a0, 0($a1)
    if (a0 == 0) goto label_0x1400c8;                           // 0x00140030: beqz $a0, 0x1400c8
    s2 = a0 + 8;                                                // 0x00140034: addiu $s2, $a0, 8
    v0 = local_4;                                               // 0x00140048: lw $v0, 4($sp)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0014004c: slt $v0, $s3, $v0
    /* bnezl $v0, 0x140080 */                                   // 0x00140050: bnezl $v0, 0x140080
    v1 = *(int8_t*)((s0) + 5);                                  // 0x00140054: lb $v1, 5($s0)
    v1 = *(int32_t*)(a0);                                       // 0x00140058: lw $v1, 0($a0)
    *(uint32_t*)(a1) = v1;                                      // 0x0014006c: sw $v1, 0($a1)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00140070: lw $v0, 0x14($s0)
    *(uint32_t*)(a0) = v0;                                      // 0x00140074: sw $v0, 0($a0)
    goto label_0x1400d0;                                        // 0x00140078: b 0x1400d0
    *(uint32_t*)((s0) + 0x14) = a0;                             // 0x0014007c: sw $a0, 0x14($s0)
    v0 = 1;                                                     // 0x00140080: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1400cc;                          // 0x00140084: bnel $v1, $v0, 0x1400cc
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00140088: sw $zero, 4($s1)
    s0 = sp + 0x10;                                             // 0x0014008c: addiu $s0, $sp, 0x10
    func_001404a0();  // 1404a0                                // 0x0014009c: jal 0x1404a0
    goto label_0x1400d0;                                        // 0x001400c0: b 0x1400d0
label_0x1400c8:
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001400c8: sw $zero, 4($s1)
label_0x1400cc:
    *(uint32_t*)(s1) = 0;                                       // 0x001400cc: sw $zero, 0($s1)
label_0x1400d0:
    func_0013ef30();  // 13ef30                                // 0x001400d0: jal 0x13ef30
    /* nop */                                                   // 0x001400d4: nop 
label_0x1400d8:
    return;                                                     // 0x001400ec: jr $ra
    sp = sp + 0x50;                                             // 0x001400f0: addiu $sp, $sp, 0x50
}